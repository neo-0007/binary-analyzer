
ulong FUN_00418460(long param_1,ulong param_2,char *param_3,char param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/core_namemap.c",0x134,"ossl_namemap_add_names");
    FUN_0051f8f0(0xf,0xc0102,0);
    return 0;
  }
  param_2 = param_2 & 0xffffffff;
  uVar2 = FUN_004222c0(*(undefined8 *)(param_1 + 8));
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  pcVar5 = param_3;
  if (*param_3 != '\0') {
    do {
      lVar3 = thunk_FUN_00712710(pcVar5,(int)param_4);
      lVar4 = lVar3 - (long)pcVar5;
      if (lVar3 == 0) {
        lVar4 = thunk_FUN_007129d0(pcVar5);
      }
      uVar1 = FUN_00418110(param_1,pcVar5,lVar4);
      if ((param_4 == *pcVar5) || (*pcVar5 == '\0')) {
        FUN_0051f420();
        FUN_0051f540("../crypto/core_namemap.c",0x149,"ossl_namemap_add_names");
        FUN_0051f8f0(0xf,0x75,0);
        goto LAB_004185e0;
      }
      if ((uint)param_2 == 0) {
        param_2 = (ulong)uVar1;
      }
      else if ((uVar1 != 0) && (uVar1 != (uint)param_2)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/core_namemap.c",0x14f,"ossl_namemap_add_names");
        FUN_0051f8f0(0xf,0x76,"\"%.*s\" has an existing different identity %d (from \"%s\")",lVar4,
                     pcVar5,uVar1,param_3);
        goto LAB_004185e0;
      }
      pcVar5 = pcVar5 + lVar4;
      if (lVar3 != 0) {
        pcVar5 = (char *)(lVar3 + 1);
      }
    } while (*pcVar5 != '\0');
    while (*param_3 != '\0') {
      lVar3 = thunk_FUN_00712710(param_3,(int)param_4);
      lVar4 = lVar3 - (long)param_3;
      if (lVar3 == 0) {
        lVar4 = thunk_FUN_007129d0(param_3);
      }
      uVar1 = FUN_00418110(param_1,param_3,lVar4);
      if (uVar1 == 0) {
        uVar1 = FUN_004181f0(param_1,param_2,param_3,lVar4);
      }
      if ((uint)param_2 == 0) {
        param_2 = (ulong)uVar1;
      }
      else if (uVar1 != (uint)param_2) {
        FUN_0051f420();
        FUN_0051f540("../crypto/core_namemap.c",0x163,"ossl_namemap_add_names");
        FUN_0051f8f0(0xf,0xc0103,"Got number %d when expecting %d",uVar1,param_2);
LAB_004185e0:
        FUN_004222e0(*(undefined8 *)(param_1 + 8));
        return 0;
      }
      pcVar5 = param_3 + lVar4;
      param_3 = (char *)(lVar3 + 1);
      if (lVar3 == 0) {
        param_3 = pcVar5;
      }
    }
  }
  FUN_004222e0(*(undefined8 *)(param_1 + 8));
  return param_2;
}

