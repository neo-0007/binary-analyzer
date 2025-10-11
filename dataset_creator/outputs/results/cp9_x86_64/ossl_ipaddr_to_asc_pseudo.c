
void ossl_ipaddr_to_asc(ushort *param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *buf;
  long in_FS_OFFSET;
  char acStack_68 [40];
  long local_40;
  
  buf = acStack_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 4) {
    BIO_snprintf(acStack_68,0x28,"%d.%d.%d.%d",(ulong)(byte)*param_1,
                 (ulong)*(byte *)((long)param_1 + 1),(ulong)(byte)param_1[1],
                 (ulong)*(byte *)((long)param_1 + 3));
  }
  else if (param_2 == 0x10) {
    iVar3 = 7;
    iVar4 = 0x28;
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = BIO_snprintf(buf,(long)iVar4,"%X:",(ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
      iVar4 = iVar4 - iVar2;
      buf = buf + iVar2;
      if (iVar2 < 0) goto LAB_0058a28e;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    BIO_snprintf(buf,(long)iVar4,"%X",(ulong)(ushort)(*param_1 << 8 | *param_1 >> 8));
  }
  else {
    BIO_snprintf(acStack_68,0x28,"<invalid length=%d>",(ulong)param_2);
  }
LAB_0058a28e:
  CRYPTO_strdup(acStack_68,"../crypto/x509/v3_utl.c",0x43d);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

