
int int_put_bytes_bn(undefined8 param_1,BIGNUM *param_2,uint *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  iVar2 = BN_num_bits(param_2);
  iVar3 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar3 = iVar2 + 7;
  }
  lVar4 = bn_get_words(param_2);
  uVar1 = (long)(iVar3 >> 3) - 1;
  *param_3 = (uint)(*(ulong *)(lVar4 + (uVar1 & 0xfffffffffffffff8)) >>
                   (sbyte)(((uint)uVar1 & 7) << 3)) & 0xff;
  iVar3 = WPACKET_allocate_bytes(param_1,(long)(iVar3 >> 3),&local_38);
  if (iVar3 != 0) {
    iVar3 = 1;
    if (local_38 != (uchar *)0x0) {
      BN_bn2bin(param_2,local_38);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

