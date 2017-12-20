bool max(int a, int b)                                                  
{                                                                       
    return a > b ? true: false;                                         
}                                                                       
                                                                        
bool min(int a, int b)                                                  
{                                                                       
    return a < b ? true: false;                                         
}                                                                       
                                                                        
bool isBST(struct node* node)                                           
{                                                                       
    if(node == NULL){                                                   
        return true;                                                    
    }                                                                   
                                                                        
    if(isBST(node->left) && isBST(node->right))                         
    {                                                                   
        return true;                                                    
    }                                                                   
                                                                        
    if((isBST(node->left) && min(node->left->data, node->data)) &&      
            (isBST(node->right) && max(node->right->data, node->data))) 
    {                                                                   
        return true;                                                    
    }                                                                   
                                                                        
    return false;                                                       
}
