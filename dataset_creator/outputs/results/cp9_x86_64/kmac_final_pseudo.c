
uint kmac_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  EVP_MD_CTX *ctx;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  size_t cnt;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  long local_30;
  
  ctx = *(EVP_MD_CTX **)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = ossl_prov_is_running();
  if (uVar1 == 0) goto LAB_00475181;
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar4 = *(long *)(param_1 + 0x28) << 3;
    if (uVar4 == 0) {
      cnt = 2;
      uVar2 = 1;
      uVar5 = 1;
      uVar1 = 0;
      goto LAB_00475142;
    }
    uVar5 = uVar4;
    uVar2 = 0;
    do {
      uVar1 = uVar2;
      uVar2 = uVar1 + 1;
      uVar5 = uVar5 >> 8;
      if (uVar5 == 0) break;
    } while (uVar2 < 8);
    uVar5 = (ulong)uVar2;
    if (uVar2 < 4) {
      cnt = (size_t)(uVar1 + 2);
      goto LAB_00475142;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/macs/kmac_prov.c",0x1dc,"right_encode");
    ERR_set_error(0x39,0xca,0);
    uVar1 = 0;
  }
  else {
    cnt = 2;
    uVar2 = 1;
    uVar1 = 0;
    uVar4 = 0;
    uVar5 = 1;
LAB_00475142:
    lVar6 = (long)(int)uVar1;
    do {
      local_34[lVar6] = (char)uVar4;
      lVar6 = lVar6 + -1;
      uVar4 = uVar4 >> 8;
    } while ((int)lVar6 != -1);
    local_34[uVar5] = (char)uVar2;
    uVar1 = EVP_DigestUpdate(ctx,local_34,cnt);
    if (uVar1 != 0) {
      iVar3 = EVP_DigestFinalXOF(ctx,param_2,*(undefined8 *)(param_1 + 0x28));
      uVar1 = (uint)(iVar3 != 0);
    }
  }
  *param_3 = *(undefined8 *)(param_1 + 0x28);
LAB_00475181:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

