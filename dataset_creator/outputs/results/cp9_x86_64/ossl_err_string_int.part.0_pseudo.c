
void ossl_err_string_int_part_0(ulong param_1,undefined8 param_2,char *param_3,size_t param_4)

{
  int iVar1;
  char *buf;
  char *buf_00;
  size_t sVar2;
  uint uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  ulong local_198;
  char local_188 [64];
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)param_1;
  if ((param_1 & 0x80000000) == 0) {
    local_198 = param_1 >> 0x17 & 0xff;
    buf = ERR_lib_error_string(param_1);
    if (buf == (char *)0x0) {
      buf = local_188;
      BIO_snprintf(buf,0x40,"lib(%lu)",local_198);
    }
    uVar4 = (ulong)(uVar3 & 0x7fffff);
    buf_00 = ERR_reason_error_string(param_1);
    if (buf_00 != (char *)0x0) goto LAB_0050fff3;
  }
  else {
    buf = ERR_lib_error_string(param_1);
    if (buf == (char *)0x0) {
      buf = local_188;
      BIO_snprintf(buf,0x40,"lib(%lu)",2);
    }
    buf_00 = local_148;
    uVar4 = (ulong)(uVar3 & 0x7fffffff);
    iVar1 = openssl_strerror_r(uVar3 & 0x7fffffff,buf_00,0x100);
    local_198 = 2;
    if (iVar1 != 0) goto LAB_0050fff3;
  }
  buf_00 = local_148;
  BIO_snprintf(buf_00,0x100,"reason(%lu)",uVar4);
LAB_0050fff3:
  BIO_snprintf(param_3,param_4,"error:%08lX:%s:%s:%s",param_1,buf,param_2,buf_00);
  sVar2 = strlen(param_3);
  if (sVar2 == param_4 - 1) {
    BIO_snprintf(param_3,param_4,"err:%lx:%lx:%lx:%lx",param_1,local_198,0,uVar4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

