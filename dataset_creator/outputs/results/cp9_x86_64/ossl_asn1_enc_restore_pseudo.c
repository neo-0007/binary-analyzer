
uint ossl_asn1_enc_restore(undefined4 *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if ((*param_3 != 0) && (lVar1 = *(long *)(param_4 + 0x20), lVar1 != 0)) {
    uVar2 = *(uint *)(lVar1 + 8) & 2;
    if (uVar2 != 0) {
      puVar3 = (undefined8 *)(*param_3 + (long)*(int *)(lVar1 + 0x20));
      uVar2 = 0;
      if (*(int *)(puVar3 + 2) == 0) {
        if (param_2 != (long *)0x0) {
          memcpy((void *)*param_2,(void *)*puVar3,puVar3[1]);
          *param_2 = *param_2 + puVar3[1];
        }
        uVar2 = 1;
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = (int)puVar3[1];
        }
      }
    }
    return uVar2;
  }
  return 0;
}

