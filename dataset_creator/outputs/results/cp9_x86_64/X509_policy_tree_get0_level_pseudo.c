
X509_POLICY_LEVEL * X509_policy_tree_get0_level(X509_POLICY_TREE *tree,int i)

{
  if (((tree != (X509_POLICY_TREE *)0x0) && (-1 < i)) && (i < *(int *)(tree + 0x18))) {
    return (X509_POLICY_LEVEL *)((long)i * 0x20 + *(long *)(tree + 0x10));
  }
  return (X509_POLICY_LEVEL *)0x0;
}

