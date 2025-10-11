
ulong i2o_SCT_signature(int *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  iVar2 = SCT_signature_is_complete();
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_oct.c",0x9f,"i2o_SCT_signature");
    ERR_set_error(0x32,0x6b,0);
  }
  else {
    if (*param_1 == 0) {
      uVar1 = *(long *)(param_1 + 0x14) + 4;
      if (param_2 != (long *)0x0) {
        puVar3 = (undefined1 *)*param_2;
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = (undefined1 *)CRYPTO_malloc((int)uVar1,"../crypto/ct/ct_oct.c",0xb4);
          puVar4 = puVar3;
          if (puVar3 == (undefined1 *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/ct/ct_oct.c",0xb6,"i2o_SCT_signature");
            ERR_set_error(0x32,0xc0100,0);
            goto LAB_0061f610;
          }
        }
        else {
          puVar4 = puVar3 + uVar1;
        }
        *param_2 = (long)puVar4;
        *puVar3 = (char)param_1[0x10];
        puVar3[1] = *(undefined1 *)((long)param_1 + 0x41);
        puVar3[2] = (char)((ulong)*(undefined8 *)(param_1 + 0x14) >> 8);
        puVar3[3] = (char)*(undefined8 *)(param_1 + 0x14);
        memcpy(puVar3 + 4,*(void **)(param_1 + 0x12),*(size_t *)(param_1 + 0x14));
      }
      return uVar1 & 0xffffffff;
    }
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_oct.c",0xa4,"i2o_SCT_signature");
    ERR_set_error(0x32,0x67,0);
  }
LAB_0061f610:
  CRYPTO_free((void *)0x0);
  return 0xffffffff;
}

