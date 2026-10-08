import sklearn
from sklearn import tree
# Rough = 1
# Smooth = 0

# Tennis = 1
# Cricket = 2

def main():
    print("Ball classification case study")
#origgional encoded dataset
    #independent variable
    X = [[35,1],[47,1],[90,0],[48,1],[90,0],[35,1],[92,0],[35,1],[35,1],[35,1],[96,0],[43,1],[110,0],[35,1],[95,0]]

    # dependent variable
    Y = [1,1,2,1,2,1,2,1,1,1,2,1,2,1,2]

    #independent variables for traning
    Xtrain=[[35,1],[47,1],[90,0],[48,1],[90,0],[35,1],[92,0],[35,1],[35,1],[35,1],[96,0],[43,1],[110,0]]
  
   #independent variables for testing
    Xtest= [[35,1],[95,0]]
    
    #dependent variable for traning
    Ytrain=[1,1,2,1,2,1,2,1,1,1,2,1,2,]
   
    #dependent variable for testing
    Ytest=[1,2]
    
    modelobj=tree.DecisionTreeClassifier()


    trainedmodel=modelobj.fit(Xtrain,Ytrain)


    Result=trainedmodel.predict([[35,1]])#1 2
    if Result==1:
        print("object looks like tennis ball")

    elif Result ==2:
        print("object looks like cricket ball")

    print("model predicts the object as:",Result)
if __name__ == "__main__":
    main()


