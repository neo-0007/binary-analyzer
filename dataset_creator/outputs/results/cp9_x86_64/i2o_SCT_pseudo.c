
ulong i2o_SCT(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *__dest;
  void *pvVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined1 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1 *)0x0;
  iVar3 = SCT_is_complete();
  if (iVar3 == 0) {
    ERR_new();
    puVar6 = (undefined1 *)0x0;
    ERR_set_debug("../crypto/ct/ct_oct.c",0xce,"i2o_SCT");
    ERR_set_error(0x32,0x6a,0);
LAB_0061f860:
    CRYPTO_free(puVar6);
    uVar5 = 0xffffffff;
  }
  else {
    iVar3 = *param_1;
    if (iVar3 == 0) {
      uVar5 = *(long *)(param_1 + 0x14) + *(long *)(param_1 + 0xe) + 0x2f;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 4);
    }
    if (param_2 != (undefined8 *)0x0) {
      __dest = (undefined1 *)*param_2;
      if (__dest == (undefined1 *)0x0) {
        __dest = (undefined1 *)CRYPTO_malloc((int)uVar5,"../crypto/ct/ct_oct.c",0xe3);
        puVar6 = __dest;
        if (__dest == (undefined1 *)0x0) {
          local_38 = __dest;
          ERR_new();
          ERR_set_debug("../crypto/ct/ct_oct.c",0xe5,"i2o_SCT");
          ERR_set_error(0x32,0xc0100,0);
          goto LAB_0061f860;
        }
        *param_2 = __dest;
        iVar3 = *param_1;
      }
      else {
        *param_2 = __dest + uVar5;
        puVar6 = (undefined1 *)0x0;
      }
      if (iVar3 == 0) {
        *__dest = 0;
        puVar1 = *(undefined8 **)(param_1 + 6);
        uVar2 = puVar1[1];
        *(undefined8 *)(__dest + 1) = *puVar1;
        *(undefined8 *)(__dest + 9) = uVar2;
        uVar2 = puVar1[3];
        *(undefined8 *)(__dest + 0x11) = puVar1[2];
        *(undefined8 *)(__dest + 0x19) = uVar2;
        __dest[0x21] = *(undefined1 *)((long)param_1 + 0x2f);
        local_38 = __dest + 0x2b;
        __dest[0x22] = (char)*(undefined2 *)((long)param_1 + 0x2e);
        __dest[0x23] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 0x28);
        __dest[0x24] = (char)param_1[0xb];
        __dest[0x25] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 0x18);
        __dest[0x26] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 0x10);
        __dest[0x27] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 8);
        __dest[0x28] = (char)*(undefined8 *)(param_1 + 10);
        __dest[0x29] = (char)((ulong)*(undefined8 *)(param_1 + 0xe) >> 8);
        __dest[0x2a] = (char)*(undefined8 *)(param_1 + 0xe);
        if (*(size_t *)(param_1 + 0xe) != 0) {
          pvVar4 = memcpy(local_38,*(void **)(param_1 + 0xc),*(size_t *)(param_1 + 0xe));
          local_38 = (undefined1 *)((long)pvVar4 + *(long *)(param_1 + 0xe));
        }
        iVar3 = i2o_SCT_signature(param_1,&local_38);
        if (iVar3 < 1) goto LAB_0061f860;
      }
      else {
        local_38 = __dest;
        memcpy(__dest,*(void **)(param_1 + 2),uVar5);
      }
    }
    uVar5 = uVar5 & 0xffffffff;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
}

