
undefined8 FUN_0061e640(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  if (param_2 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_ist.c",99,"i2r_issuer_sign_tool");
    FUN_0051f8f0(0x22,0x80106,0);
    return 0;
  }
  if (*param_2 == 0) {
    if (param_2[1] != 0) goto LAB_0061e6b8;
    if (param_2[2] == 0) {
      if (param_2[3] == 0) {
        return 1;
      }
      goto LAB_0061e740;
    }
LAB_0061e6fc:
    FUN_004ae9e0(param_3,"%*ssignToolCert: ",param_4,&DAT_0083e5c2);
    FUN_004ab7e0(param_3,*(undefined8 *)((undefined4 *)param_2[2] + 2),*(undefined4 *)param_2[2]);
LAB_0061e725:
    lVar1 = param_2[3];
  }
  else {
    FUN_004ae9e0(param_3,"%*ssignTool    : ",param_4,&DAT_0083e5c2);
    FUN_004ab7e0(param_3,*(undefined8 *)((undefined4 *)*param_2 + 2),*(undefined4 *)*param_2);
    if (param_2[1] != 0) {
      FUN_004ab7e0(param_3,&DAT_008243ea,1);
LAB_0061e6b8:
      FUN_004ae9e0(param_3,"%*scATool      : ",param_4,&DAT_0083e5c2);
      FUN_004ab7e0(param_3,*(undefined8 *)((undefined4 *)param_2[1] + 2),*(undefined4 *)param_2[1]);
      if (param_2[2] != 0) {
LAB_0061e6e8:
        FUN_004ab7e0(param_3,&DAT_008243ea,1);
        goto LAB_0061e6fc;
      }
      goto LAB_0061e725;
    }
    if (param_2[2] != 0) goto LAB_0061e6e8;
    lVar1 = param_2[3];
  }
  if (lVar1 == 0) {
    return 1;
  }
  FUN_004ab7e0(param_3,&DAT_008243ea,1);
LAB_0061e740:
  FUN_004ae9e0(param_3,"%*scAToolCert  : ",param_4,&DAT_0083e5c2);
  FUN_004ab7e0(param_3,*(undefined8 *)((undefined4 *)param_2[3] + 2),*(undefined4 *)param_2[3]);
  return 1;
}

