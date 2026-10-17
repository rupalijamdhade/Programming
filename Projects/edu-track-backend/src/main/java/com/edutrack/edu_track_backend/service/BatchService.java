package com.edutrack.backend.service;

import com.edutrack.backend.entity.BatchEntity;
import com.edutrack.backend.repository.BatchRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import java.util.List;
import java.util.Optional;

@Service
public class BatchService {

    @Autowired
    private BatchRepository batchRepository;

    // Get all batches
    public List<BatchEntity> getAllBatches() {
        return batchRepository.findAll();
    }

    // Add a new batch
    public BatchEntity addBatch(BatchEntity batch) {
        return batchRepository.save(batch);
    }

    // Delete a batch by id
    public void deleteBatch(String id) {
        batchRepository.deleteById(id);
    }

    // Get a batch by id
    public Optional<BatchEntity> getBatchById(String id) {
        return batchRepository.findById(id);
    }
}
