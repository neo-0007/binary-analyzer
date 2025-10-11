
ulong ecx_validate(undefined8 *param_1,uint param_2,int param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auStack_78 [72];
  long local_30;
  
  lVar3 = param_1[0xb];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) goto LAB_00470b60;
  uVar2 = 1;
  if ((param_2 & 3) == 0) goto LAB_00470b60;
  if (lVar3 != param_4) {
    ERR_new();
    ERR_set_debug("../providers/implementations/keymgmt/ecx_kmgmt.c",0x2f6,"ecx_validate");
    ERR_set_error(0x39,0xad,0);
    uVar2 = 0;
    goto LAB_00470b60;
  }
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) == 0) goto LAB_00470b9b;
LAB_00470b43:
    lVar3 = param_1[10];
    uVar2 = 0;
    if ((lVar3 == 0) || (uVar2 = 1, (param_2 & 3) != 3)) goto LAB_00470b60;
  }
  else {
    uVar2 = 0;
    if ((*(byte *)(param_1 + 2) & 1) == 0) goto LAB_00470b60;
    if ((param_2 & 1) != 0) goto LAB_00470b43;
LAB_00470b9b:
    uVar2 = 1;
    if ((param_2 & 3) != 3) goto LAB_00470b60;
    lVar3 = param_1[10];
  }
  if (param_3 == 2) {
    iVar1 = ossl_ed25519_public_from_private(*param_1,auStack_78,lVar3,param_1[1]);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_00470b60;
    }
  }
  else if (param_3 == 3) {
    iVar1 = ossl_ed448_public_from_private(*param_1,auStack_78,lVar3,param_1[1]);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_00470b60;
    }
  }
  else if (param_3 == 1) {
    ossl_x448_public_from_private(auStack_78);
  }
  else {
    ossl_x25519_public_from_private();
  }
  iVar1 = CRYPTO_memcmp((void *)((long)param_1 + 0x11),auStack_78,param_1[0xb]);
  uVar2 = (ulong)(iVar1 == 0);
LAB_00470b60:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

