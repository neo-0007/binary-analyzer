
undefined8 X509_check_ip_asc(undefined8 param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    iVar1 = ossl_a2i_ipadd(auStack_38);
    if ((long)iVar1 != 0) {
      uVar2 = do_x509_check(param_1,auStack_38,(long)iVar1,param_3,7,0);
      goto LAB_0058a592;
    }
  }
  uVar2 = 0xfffffffe;
LAB_0058a592:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

