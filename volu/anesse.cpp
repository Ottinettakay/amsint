std::vector<Point> B; // Basis points
Point p; // A point to check

for (size_t i = 0; i < B.size(); ++i) {
    for (size_t j = i + 1; j < B.size(); ++j) {
        if (enclosesNot(encloseBasis2(B[i], B[j]), p) 
            && enclosesNot(encloseBasis2(B[i], p), B[j]) 
            && enclosesNot(encloseBasis2(B[j], p), B[i]) 
            && enclosesWeakAll(encloseBasis3(B[i], B[j], p), B)) {
            
            // If all conditions are met, we have found a valid enclosing circle
            Circle c = encloseBasis3(B[i], B[j], p);
            // Further logic to update the smallest enclosing circle
        }
    }
}
