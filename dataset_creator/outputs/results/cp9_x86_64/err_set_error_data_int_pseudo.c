
undefined8
err_set_error_data_int(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *ptr;
  long lVar5;
  
  lVar2 = ossl_err_get_state_int();
  if (lVar2 == 0) {
    return 0;
  }
  lVar4 = (long)*(int *)(lVar2 + 0x380);
  lVar3 = lVar4 + 0x80;
  uVar1 = *(uint *)(lVar2 + lVar3 * 4) & 1;
  if (uVar1 == 0) {
    lVar5 = lVar4 + 0x20;
    lVar4 = lVar4 + 0x30;
    *(undefined8 *)(lVar2 + lVar5 * 8) = 0;
    *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
    *(undefined4 *)(lVar2 + lVar3 * 4) = 0;
    goto LAB_00510be7;
  }
  lVar5 = lVar2 + lVar4 * 8;
  ptr = *(undefined1 **)(lVar5 + 0x100);
  if (param_4 == 0) {
    lVar5 = lVar4 + 0x20;
    if (ptr != (undefined1 *)0x0) {
      *ptr = 0;
      goto LAB_00510b83;
    }
  }
  else {
    CRYPTO_free(ptr);
    uVar1 = 0;
    *(undefined8 *)(lVar5 + 0x100) = 0;
    *(undefined8 *)(lVar5 + 0x180) = 0;
LAB_00510b83:
    lVar4 = (long)*(int *)(lVar2 + 0x380);
    *(uint *)(lVar2 + lVar3 * 4) = uVar1;
    lVar5 = lVar4 + 0x20;
    lVar3 = lVar4 + 0x80;
    if ((*(byte *)(lVar2 + 0x200 + lVar4 * 4) & 1) == 0) {
      lVar4 = lVar4 + 0x30;
      goto LAB_00510be7;
    }
    ptr = *(undefined1 **)(lVar2 + lVar5 * 8);
  }
  lVar4 = lVar4 + 0x30;
  CRYPTO_free(ptr);
LAB_00510be7:
  *(undefined8 *)(lVar2 + lVar5 * 8) = param_1;
  *(undefined8 *)(lVar2 + lVar4 * 8) = param_2;
  *(undefined4 *)(lVar2 + lVar3 * 4) = param_3;
  return 1;
}

