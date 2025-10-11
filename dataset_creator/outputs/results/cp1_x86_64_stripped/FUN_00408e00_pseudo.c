
undefined8 FUN_00408e00(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  pcVar6 = "-fips";
  if (param_2 != 0) {
    pcVar6 = "fips=yes";
  }
  plVar2 = (long *)FUN_00425350(param_1,param_3);
  if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
    lVar3 = FUN_00426fd0(param_1,pcVar6,1);
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_fetch.c",0x214,"evp_default_properties_merge");
      FUN_0051f8f0(6,0xd2,0);
      uVar5 = 0;
    }
    else {
      lVar4 = FUN_00427410(lVar3,*plVar2);
      FUN_004273f0(lVar3);
      if (lVar4 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/evp_fetch.c",0x21a,"evp_default_properties_merge");
        FUN_0051f8f0(6,0xc0100,0);
        uVar5 = 0;
      }
      else {
        iVar1 = FUN_00408460(param_1,lVar4,0,0);
        if (iVar1 == 0) {
          FUN_004273f0(lVar4);
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
      }
    }
    return uVar5;
  }
  uVar5 = FUN_00408cf0(param_1,pcVar6,0,0);
  return uVar5;
}

