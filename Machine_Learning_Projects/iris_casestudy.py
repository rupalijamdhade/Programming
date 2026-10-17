import pandas as pd
import matplotlib.pyplot as plt

from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier, plot_tree
from sklearn.metrics import (
    accuracy_score,
    confusion_matrix,
    classification_report,
    ConfusionMatrixDisplay
)

Border = "-" * 40

#########################################################
# Step 1: Load the dataset
#########################################################

print(Border)
print("Step 1: Load the dataset")
print(Border)

DatasetPath = "iris.csv"
df = pd.read_csv(DatasetPath)

# Remove extra spaces from column names
df.columns = df.columns.str.strip()

print("Dataset loaded successfully!")
print("Initial entries:")
print(df.head())

#########################################################
# Step 2: Data Analysis (EDA)
#########################################################

print(Border)
print("Step 2: Data Analysis")
print(Border)

print("Dataset shape:", df.shape)
print("Column names:", list(df.columns))

print("Missing values:")
print(df.isnull().sum())

# Identify the target column
target_options = ["species", "variety", "class", "target"]
target_col = next(
    (col for col in df.columns if col.strip().lower() in target_options),
    None
)

if target_col is None:
    raise ValueError(
        "Target column not found. Expected one of: "
        "'species', 'variety', 'class', or 'target'. "
        f"Available columns: {list(df.columns)}"
    )

print("Class distribution:")
print(df[target_col].value_counts())

print("Statistical report:")
print(df.describe())

#########################################################
# Step 3: Select independent and dependent variables
#########################################################

print(Border)
print("Step 3: Select X and Y")
print(Border)

required_features = [
    "sepal length(cm)",
    "sepal width(cm)",
    "petal length(cm)",
    "petal width(cm)"
]

# Match feature names even if spaces/capitalization differ
column_lookup = {
    col.replace(" ", "").lower(): col for col in df.columns
}

feature_cols = []
for feature in required_features:
    key = feature.replace(" ", "").lower()
    if key not in column_lookup:
        raise ValueError(
            f"Feature column not found: {feature}. "
            f"Available columns: {list(df.columns)}"
        )
    feature_cols.append(column_lookup[key])

# Check for missing values before training
if df[feature_cols + [target_col]].isnull().any().any():
    raise ValueError(
        "Dataset contains missing values. Please clean the dataset "
        "before training the model."
    )

# Ensure all feature columns contain numeric values
for col in feature_cols:
    df[col] = pd.to_numeric(df[col], errors="raise")

X = df[feature_cols]
Y = df[target_col]

print("Features:", feature_cols)
print("Target column:", target_col)
print("X shape:", X.shape)
print("Y shape:", Y.shape)

#########################################################
# Step 4: Visualisation of dataset
#########################################################

print(Border)
print("Step 4: Visualisation")
print(Border)

plt.figure(figsize=(7, 5))

for sp in Y.unique():
    temp = df[df[target_col] == sp]
    plt.scatter(
        temp[feature_cols[2]],
        temp[feature_cols[3]],
        label=str(sp)
    )

plt.title("Iris: Petal Length vs Petal Width")
plt.xlabel("Petal Length (cm)")
plt.ylabel("Petal Width (cm)")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.show()

#########################################################
# Step 5: Split dataset into training and testing
#########################################################

print(Border)
print("Step 5: Train-Test Split")
print(Border)

# 80% training data and 20% testing data
X_train, X_test, Y_train, Y_test = train_test_split(
    X,
    Y,
    test_size=0.2,
    random_state=42,
    stratify=Y
)

print("Data splitting completed!")
print("X:", X.shape)
print("Y:", Y.shape)
print("X_train:", X_train.shape)
print("X_test:", X_test.shape)
print("Y_train:", Y_train.shape)
print("Y_test:", Y_test.shape)

#########################################################
# Step 6: Build the Decision Tree model
#########################################################

print(Border)
print("Step 6: Build the model")
print(Border)

model = DecisionTreeClassifier(
    criterion="gini",
    max_depth=3,
    random_state=42
)

print("Model successfully created:")
print(model)

#########################################################
# Step 7: Train the model
#########################################################

print(Border)
print("Step 7: Train the model")
print(Border)

model.fit(X_train, Y_train)
print("Model training completed!")

#########################################################
# Step 8: Make predictions
#########################################################

print(Border)
print("Step 8: Make predictions")
print(Border)

Y_pred = model.predict(X_test)

print("Actual values:")
print(Y_test.tolist())

print("Predicted values:")
print(Y_pred.tolist())

#########################################################
# Step 9: Evaluate model performance
#########################################################

print(Border)
print("Step 9: Model Evaluation")
print(Border)

accuracy = accuracy_score(Y_test, Y_pred)
print("Accuracy:", round(accuracy * 100, 2), "%")

print("Classification Report:")
print(classification_report(Y_test, Y_pred, zero_division=0))

cm = confusion_matrix(Y_test, Y_pred, labels=model.classes_)
print("Confusion Matrix:")
print(cm)

#########################################################
# Step 10: Plot confusion matrix
#########################################################

print(Border)
print("Step 10: Confusion Matrix")
print(Border)

disp = ConfusionMatrixDisplay(
    confusion_matrix=cm,
    display_labels=model.classes_
)
disp.plot(cmap="Blues")
plt.title("Confusion Matrix - Iris Dataset")
plt.tight_layout()
plt.show()

#########################################################
# Step 11: Visualise Decision Tree
#########################################################

print(Border)
print("Step 11: Decision Tree Visualisation")
print(Border)

plt.figure(figsize=(14, 8))
plot_tree(
    model,
    feature_names=feature_cols,
    class_names=[str(c) for c in model.classes_],
    filled=True,
    rounded=True
)
plt.title("Decision Tree Classifier - Iris Dataset")
plt.tight_layout()
plt.show()
