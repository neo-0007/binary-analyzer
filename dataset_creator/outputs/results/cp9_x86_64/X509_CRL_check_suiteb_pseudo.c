
undefined8 X509_CRL_check_suiteb(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong local_10;
  
  uVar2 = 0;
  if ((param_3 & 0x30000) != 0) {
    local_10 = param_3;
    iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 8));
    uVar2 = check_suite_b(param_2,iVar1,&local_10);
  }
  return uVar2;
}

