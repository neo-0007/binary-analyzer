
uint ossl_prov_drbg_reseed
               (DRBG_CTX *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
               ulong param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  size_t olen;
  time_t tVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  uVar1 = ossl_prov_is_running();
  if (uVar1 == 0) goto LAB_0059fec6;
  if (*(int *)(param_1 + 0xf0) != 1) {
    rand_drbg_restart_isra_0(param_1);
    if (*(int *)(param_1 + 0xf0) == 2) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x204,"ossl_prov_drbg_reseed");
      ERR_set_error(0x39,0xc0,0);
      uVar1 = 0;
      goto LAB_0059fec6;
    }
    if (*(int *)(param_1 + 0xf0) == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x208,"ossl_prov_drbg_reseed");
      ERR_set_error(0x39,0xc1,0);
      uVar1 = 0;
      goto LAB_0059fec6;
    }
  }
  if (param_3 == 0) {
LAB_0059fda9:
    if (param_5 == 0) {
      param_6 = 0;
    }
    else if (*(ulong *)(param_1 + 0xb8) < param_6) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x21d,"ossl_prov_drbg_reseed");
      ERR_set_error(0x39,0xb8,0);
      uVar1 = 0;
      goto LAB_0059fec6;
    }
    *(undefined4 *)(param_1 + 0xf0) = 2;
    if (*(int *)(param_1 + 0xd8) == 0) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xd8) + 1;
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0xdc) = iVar2;
    }
    lVar6 = param_5;
    uVar7 = param_6;
    if (param_3 != 0) {
      uVar7 = 0;
      lVar6 = 0;
      iVar2 = (**(code **)(param_1 + 0x20))(param_1,param_3,param_4,param_5,param_6);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/rands/drbg.c",0x239,"ossl_prov_drbg_reseed");
        ERR_set_error(0x39,0xcc,0);
        uVar1 = 0;
        goto LAB_0059fec6;
      }
    }
    olen = get_entropy(param_1,&local_48,*(int *)(param_1 + 0x80),*(size_t *)(param_1 + 0x90),
                       *(size_t *)(param_1 + 0x98));
    if ((olen < *(ulong *)(param_1 + 0x90)) || (*(ulong *)(param_1 + 0x98) < olen)) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x248,"ossl_prov_drbg_reseed");
      ERR_set_error(0x39,0xbd,0);
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x20))(param_1,local_48,olen,lVar6,uVar7);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xf0) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 1;
        tVar4 = time((time_t *)0x0);
        *(time_t *)(param_1 + 200) = tVar4;
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xdc);
        if (*(long *)(param_1 + 0x30) != 0) {
          uVar3 = get_parent_reseed_count(param_1);
          *(undefined4 *)(param_1 + 0xe0) = uVar3;
        }
      }
    }
    cleanup_entropy(param_1,local_48,olen);
    uVar1 = (uint)(*(int *)(param_1 + 0xf0) == 1);
  }
  else {
    if (param_4 < *(ulong *)(param_1 + 0x90)) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x20f,"ossl_prov_drbg_reseed");
      uVar5 = 0x7c;
    }
    else {
      if (param_4 <= *(ulong *)(param_1 + 0x98)) goto LAB_0059fda9;
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x214,"ossl_prov_drbg_reseed");
      uVar5 = 0x6a;
    }
    ERR_set_error(0x24,uVar5,0);
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xf0) = 2;
  }
LAB_0059fec6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

