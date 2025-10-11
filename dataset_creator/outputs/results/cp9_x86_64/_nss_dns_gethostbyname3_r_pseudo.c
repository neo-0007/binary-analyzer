
undefined4
_nss_dns_gethostbyname3_r
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 *param_6,undefined4 *param_7,undefined8 param_8,
          undefined8 param_9)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  lVar2 = __resolv_context_get();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
    *param_6 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    *param_7 = 0xffffffff;
  }
  else {
    uVar1 = gethostbyname3_context
                      (lVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                      );
    __resolv_context_put(lVar2);
  }
  return uVar1;
}

