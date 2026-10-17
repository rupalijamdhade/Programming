package com.edutrack.backend.controller;

import com.edutrack.backend.entity.BatchEntity;
import com.edutrack.backend.service.BatchService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;
import java.util.List;

@RestController
@RequestMapping("/batches")
@CrossOrigin(origins = "http://localhost:3000") // allows React frontend to call
public class BatchController {

    @Autowired
    private BatchService batchService;

    // GET /batches → return all batches
    @GetMapping
    public List<BatchEntity> getAllBatches() {
        return batchService.getAllBatches();
    }

    // POST /batches → add a new batch
    @PostMapping
    public BatchEntity addBatch(@RequestBody BatchEntity batch) {
        return batchService.addBatch(batch);
    }

    // DELETE /batches/{id} → delete a batch
    @DeleteMapping("/{id}")
    public void deleteBatch(@PathVariable String id) {
        batchService.deleteBatch(id);
    }
}
