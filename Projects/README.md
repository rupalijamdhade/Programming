# EduTrack – Backend

Backend for **EduTrack**, a classroom and student management portal, built with **Spring Boot** and **MongoDB**.

## Tech Stack

- Java 17
- Spring Boot 3.5 (Spring Web)
- Spring Data MongoDB
- Lombok
- Maven (wrapper included, no separate Maven install needed)

## Prerequisites

- JDK 17 or later
- MongoDB running locally, or a MongoDB Atlas connection string

## Configuration

Set the MongoDB connection in `src/main/resources/application.properties`, for example:

```properties
spring.data.mongodb.uri=mongodb://localhost:27017/edutrack
```

Do not commit real usernames or passwords to this repository.

## Run

Windows:

```bash
mvnw.cmd spring-boot:run
```

Linux / macOS:

```bash
./mvnw spring-boot:run
```

The application starts on `http://localhost:8080` by default.

## Build

```bash
mvnw.cmd clean package
```

The runnable JAR is created in the `target` folder.
