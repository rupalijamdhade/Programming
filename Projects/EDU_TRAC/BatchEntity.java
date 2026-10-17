package com.edutrack.backend.entity;

import org.springframework.data.annotation.Id;
import org.springframework.data.mongodb.core.mapping.Document;

@Document(collection = "batches")
public class BatchEntity {

    @Id
    private String id;
    private String name;
    private String course;

    public BatchEntity() {}

    public BatchEntity(String name, String course) {
        this.name = name;
        this.course = course;
    }

    public String getId() { return id; }
    public void setId(String id) { this.id = id; }

    public String getName() { return name; }
    public void setName(String name) { this.name = name; }

    public String getCourse() { return course; }
    public void setCourse(String course) { this.course = course; }
}
