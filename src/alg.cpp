// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"
#include <vector>
#include <memory>
#include <cstddef> 

class PermutationTree {
public:
   
    explicit PermutationTree(const std::vector<char>& elements)

    struct TreeNode {
        char value;
        std::vector<std::shared_ptr<TreeNode>> children;

        explicit TreeNode(char val) : value(val) {}
    }

    std::shared_ptr<TreeNode> getRoot() const { return root_; }

    size_t getTotalPermutations() const { return total_permutations_; }

    std::vector<std::vector<char>> generateAllPermutations() const;

    std::vector<char> getPermutationByIndex(int index) const;
    std::vector<char> getPermutationByIndexAlt(int index) const;

private:
    std::shared_ptr<TreeNode> root_;
    size_t total_permutations_;

    void buildTree(const std::shared_ptr<TreeNode>& parent,
        std::vector<char> remaining_elements);

    void collectPermutations(const std::shared_ptr<TreeNode>& node,
        std::vector<char>& current,
        std::vector<std::vector<char>>& result) const;
}

