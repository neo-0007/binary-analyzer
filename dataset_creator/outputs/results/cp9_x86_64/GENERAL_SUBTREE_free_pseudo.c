
void GENERAL_SUBTREE_free(GENERAL_SUBTREE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)GENERAL_SUBTREE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

