
long FUN_00601010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                 uint param_13)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  ulong local_c8;
  undefined4 local_64;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  lVar3 = 0;
  local_c8 = (ulong)param_13;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (char *)0x0;
  if (0 < (int)param_13) {
    lVar3 = FUN_007607a0(0);
    lVar3 = (int)param_13 + lVar3;
  }
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_client.c",0x44f,"OSSL_HTTP_get");
    FUN_0051f8f0(0x3d,0xc0102,0);
    lVar5 = 0;
  }
  else {
    pcVar4 = (char *)FUN_0041c2c0(param_1,"../crypto/http/http_client.c",0x452);
    if (pcVar4 != (char *)0x0) {
      iVar7 = 0;
LAB_0060125a:
      iVar2 = FUN_006024a0(pcVar4,&local_64,0,&local_58,&local_50,0,&local_48,0,0);
      if (iVar2 != 0) {
        lVar6 = FUN_006005a0(local_58,local_50,param_2,param_3,local_64,param_4,param_5,param_6,
                             param_7,param_8,local_c8 & 0xffffffff);
        do {
          if (lVar6 != 0) {
            iVar2 = FUN_00600b30(lVar6,local_48,param_9,0,0,param_10,param_11,param_12,
                                 0xffffffffffffffff,0);
            if (iVar2 == 0) {
              FUN_005fee20(lVar6);
              FUN_0041ad60(local_48,"../crypto/http/http_client.c",0x469);
              pcVar1 = local_60;
              goto joined_r0x00601174;
            }
            lVar5 = FUN_00600d40(lVar6,&local_60);
            FUN_0041ad60(local_48,"../crypto/http/http_client.c",0x469);
            pcVar1 = local_60;
            if (lVar5 == 0) goto joined_r0x00601174;
            uVar8 = 1;
LAB_00601367:
            FUN_0041ad60(local_58,"../crypto/http/http_client.c",0x47c);
            FUN_0041ad60(local_50,"../crypto/http/http_client.c",0x47d);
            iVar7 = FUN_00600fb0(lVar6,uVar8);
            if (iVar7 == 0) {
              FUN_004ab560(lVar5);
              lVar5 = 0;
            }
            goto LAB_006013ae;
          }
          FUN_0041ad60(local_48,"../crypto/http/http_client.c",0x469);
          pcVar1 = local_60;
joined_r0x00601174:
          local_60 = pcVar1;
          if (pcVar1 == (char *)0x0) {
            uVar8 = 0;
            lVar5 = 0;
            goto LAB_00601367;
          }
          iVar7 = iVar7 + 1;
          if (0x31 < iVar7) {
            FUN_0051f420();
            FUN_0051f540("../crypto/http/http_client.c",0x42f,"redirection_ok");
            FUN_0051f8f0(0x3d,0x73,0);
LAB_00601424:
            uVar8 = 0;
            FUN_0041ad60(local_60,"../crypto/http/http_client.c",0x47a);
            lVar5 = 0;
            goto LAB_00601367;
          }
          if (((*pcVar1 != '/') && (iVar2 = thunk_FUN_00712ab0(pcVar4,"https:",6), iVar2 == 0)) &&
             (iVar2 = thunk_FUN_00712ab0(pcVar1,"https:",6), iVar2 != 0)) {
            FUN_0051f420();
            FUN_0051f540("../crypto/http/http_client.c",0x436,"redirection_ok");
            FUN_0051f8f0(0x3d,0x70,0);
            goto LAB_00601424;
          }
          lVar5 = FUN_007607a0(0);
          if (lVar3 != 0) {
            if (lVar3 < lVar5) {
              FUN_0051f420();
              FUN_0051f540("../crypto/http/http_client.c",0x1d9,"may_still_retry");
              FUN_0051f8f0(0x3d,0x81,0);
              goto LAB_00601424;
            }
            local_c8 = 0x7fffffff;
            if (lVar3 - lVar5 < 0x80000000) {
              local_c8 = lVar3 - lVar5;
            }
          }
          FUN_004abd40(param_4,1,0);
          FUN_0041ad60(pcVar4,"../crypto/http/http_client.c",0x46e);
          pcVar4 = local_60;
          if (*local_60 != '/') goto code_r0x00601223;
          local_48 = FUN_0041c2c0(local_60,"../crypto/http/http_client.c",0x471);
        } while( true );
      }
      lVar5 = 0;
LAB_006013ae:
      FUN_0041ad60(pcVar4,"../crypto/http/http_client.c",0x484);
      goto LAB_006013c8;
    }
    lVar5 = 0;
  }
LAB_006013c8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar5;
code_r0x00601223:
  FUN_0041ad60(local_58,"../crypto/http/http_client.c",0x474);
  FUN_0041ad60(local_50,"../crypto/http/http_client.c",0x475);
  FUN_00600fb0(lVar6,1);
  goto LAB_0060125a;
}

