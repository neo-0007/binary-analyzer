
ulong cert_crl(long param_1,X509_CRL *param_2,X509 *param_3)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  X509_REVOKED *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x10) == 0) &&
     (((ulong)param_2[1].sig_alg & 0x20000000000) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x24;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar2 == 0) goto LAB_0058fcc7;
  }
  iVar1 = X509_CRL_get0_by_cert(param_2,&local_28,param_3);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (*(int *)&local_28[1].revocationDate == 8) {
    uVar2 = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 0x17;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
LAB_0058fcc7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

