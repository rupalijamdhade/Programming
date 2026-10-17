package com.edutrack.backend.entity;

import org.springframework.data.annotation.Id;
import org.springframework.data.mongodb.core.mapping.Document;

@Document(collection = "students")
public class StudentEntity {

    @Id
    private String id;
    private String name;
    private String batchId; // stores which batch this student belongs to

    public StudentEntity() {}

    public StudentEntity(String name, String batchId) {
        this.name = name;
        this.batchId = batchId;
    }

    public String getId() { return id; }
    public void setId(String id) { this.id = id; }

    public String getName() { return name; }
    public void setName(String name) { this.name = name; }

    public String getBatchId() { return batchId; }
    public void setBatchId(String batchId) { this.batchId = batchId; }
}
