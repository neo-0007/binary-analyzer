
ulong _nss_dns_gethostbyname_r
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  uVar2 = res_hnok();
  if ((int)uVar2 == 0) {
    *param_6 = 1;
  }
  else {
    lVar3 = __resolv_context_get();
    if (lVar3 != 0) {
      uVar1 = gethostbyname3_context(lVar3,param_1,2,param_2,param_3,param_4,param_5,param_6,0,0);
      __resolv_context_put(lVar3);
      return (ulong)uVar1;
    }
    *param_5 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    uVar2 = 0xffffffff;
    *param_6 = 0xffffffff;
  }
  return uVar2;
}

