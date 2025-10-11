
uint x509_store_add_part_0(long param_1,_union_381 param_2,int param_3)

{
  uint extraout_EAX;
  uint uVar1;
  uint extraout_EAX_00;
  int iVar2;
  X509_OBJECT *a;
  X509_OBJECT *pXVar3;
  
  a = (X509_OBJECT *)X509_OBJECT_new();
  if (a == (X509_OBJECT *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    a->type = 1;
    a->data = param_2;
    X509_OBJECT_up_ref_count(a);
    uVar1 = extraout_EAX;
  }
  else {
    a->type = 2;
    a->data = param_2;
    X509_OBJECT_up_ref_count(a);
    uVar1 = extraout_EAX_00;
  }
  if ((uVar1 != 0) && (uVar1 = X509_STORE_lock(param_1), uVar1 != 0)) {
    pXVar3 = X509_OBJECT_retrieve_match(*(stack_st_X509_OBJECT **)(param_1 + 8),a);
    if (pXVar3 == (X509_OBJECT *)0x0) {
      iVar2 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),a);
      uVar1 = (uint)(iVar2 != 0);
      X509_STORE_unlock(param_1);
      if (iVar2 != 0) {
        return uVar1;
      }
    }
    else {
      uVar1 = 1;
      X509_STORE_unlock(param_1);
    }
    X509_OBJECT_free(a);
    return uVar1;
  }
  a->type = 0;
  X509_OBJECT_free(a);
  return uVar1;
}

