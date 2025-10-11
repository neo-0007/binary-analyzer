
long FUN_0061d7b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 local_40 [2];
  
  local_40[0] = param_5;
  uVar2 = FUN_0061d030(local_40);
  iVar3 = FUN_0061d0a0(local_40);
  uVar1 = local_40[0];
  if (iVar3 == 0) {
    uVar4 = FUN_00424460(param_4);
    lVar5 = FUN_0061d500(param_1,param_2,uVar4,uVar2,uVar1);
    if (lVar5 == 0) {
      if (param_3 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_conf.c",0x34,"X509V3_EXT_nconf_int");
        FUN_0051f8f0(0x22,0x80,"name=%s, value=%s",param_4,local_40[0]);
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_conf.c",0x30,"X509V3_EXT_nconf_int");
        FUN_0051f8f0(0x22,0x80,"section=%s, name=%s, value=%s",param_3,param_4,local_40[0]);
      }
    }
  }
  else {
    lVar5 = FUN_0061d150(param_4,local_40[0],uVar2,iVar3,param_2);
  }
  return lVar5;
}

