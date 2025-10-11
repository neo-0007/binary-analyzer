
long ossl_prov_import_key
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  
  pcVar2 = (code *)ossl_prov_get_keymgmt_new();
  pcVar3 = (code *)ossl_prov_get_keymgmt_free(param_1);
  pcVar4 = (code *)ossl_prov_get_keymgmt_import(param_1);
  if ((pcVar2 != (code *)0x0 && pcVar4 != (code *)0x0) && (pcVar3 != (code *)0x0)) {
    lVar5 = (*pcVar2)(param_2);
    if ((lVar5 != 0) && (iVar1 = (*pcVar4)(lVar5,param_3,param_4), iVar1 != 0)) {
      return lVar5;
    }
    (*pcVar3)(lVar5);
  }
  return 0;
}

