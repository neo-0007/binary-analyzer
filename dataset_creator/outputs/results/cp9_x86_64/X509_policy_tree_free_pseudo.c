
void X509_policy_tree_free(X509_POLICY_TREE *tree)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (tree != (X509_POLICY_TREE *)0x0) {
    OPENSSL_sk_free(*(undefined8 *)(tree + 0x28));
    OPENSSL_sk_pop_free(*(undefined8 *)(tree + 0x30),exnode_free);
    if (0 < *(int *)(tree + 0x18)) {
      iVar2 = 0;
      puVar1 = *(undefined8 **)(tree + 0x10);
      do {
        iVar2 = iVar2 + 1;
        X509_free((X509 *)*puVar1);
        OPENSSL_sk_pop_free(puVar1[1],ossl_policy_node_free);
        ossl_policy_node_free(puVar1[2]);
        puVar1 = puVar1 + 4;
      } while (iVar2 < *(int *)(tree + 0x18));
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(tree + 0x20),ossl_policy_data_free);
    CRYPTO_free(*(void **)(tree + 0x10));
    CRYPTO_free(tree);
    return;
  }
  return;
}

