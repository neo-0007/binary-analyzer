
long FUN_006005a0(long param_1,char *param_2,long param_3,long param_4,int param_5,long param_6,
                 long param_7,code *param_8,undefined8 param_9,undefined4 param_10,int param_11)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_68;
  long local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 != 0) && (param_8 == (code *)0x0)) {
    FUN_0051f420();
    lVar2 = 0;
    FUN_0051f540("../crypto/http/http_client.c",899,"OSSL_HTTP_open");
    FUN_0051f8f0(0x3d,0x6b,0);
    goto LAB_006006c3;
  }
  if (param_7 != 0) {
    if ((param_6 == 0) || (param_8 != (code *)0x0)) {
      FUN_0051f420();
      uVar5 = 0x387;
    }
    else {
      if (param_4 == 0 && param_3 == 0) {
        FUN_0051f000();
        lVar2 = FUN_005fed10(param_6,param_7,param_10);
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 0x14) = 0;
          *(undefined8 *)(lVar2 + 0x28) = 0;
          *(undefined8 *)(lVar2 + 0x30) = param_9;
          *(int *)(lVar2 + 0x38) = param_5;
          goto LAB_0060065a;
        }
        goto LAB_0060063c;
      }
LAB_00600a15:
      FUN_0051f420();
      uVar5 = 0x38e;
    }
    lVar2 = 0;
    FUN_0051f540("../crypto/http/http_client.c",uVar5,"OSSL_HTTP_open");
    FUN_0051f8f0(0x3d,0x80106,0);
    goto LAB_006006c3;
  }
  if (param_6 == 0) {
    local_50 = 0;
    local_48 = (char *)0x0;
    if (param_1 == 0) {
      FUN_0051f420();
      lVar2 = 0;
      FUN_0051f540("../crypto/http/http_client.c",0x396,"OSSL_HTTP_open");
      FUN_0051f8f0(0x3d,0xc0102,0);
      goto LAB_006006c3;
    }
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      param_2 = (char *)0x0;
      lVar2 = thunk_FUN_00712710(param_1,0x3a);
      if ((lVar2 == 0) && (param_2 = "443", param_5 == 0)) {
        param_2 = "80";
      }
    }
    local_68 = FUN_006027d0(param_3,param_4,param_1,param_5);
    if ((local_68 == 0) ||
       (iVar1 = FUN_006024a0(local_68,0,0,&local_50,&local_48,0,0,0,0), iVar1 != 0)) {
      pcVar4 = local_48;
      lVar2 = local_50;
      if (local_50 == 0) {
        pcVar4 = param_2;
        lVar2 = param_1;
      }
      if (pcVar4 == (char *)0x0) {
        lVar3 = thunk_FUN_00712710(lVar2,0x3a);
        if (lVar3 == 0) {
          pcVar4 = "443";
          if (param_5 == 0) {
            pcVar4 = "80";
          }
          goto LAB_006007b1;
        }
        lVar2 = FUN_00618460(lVar2);
        FUN_0041ad60(local_50,"../crypto/http/http_client.c",0x3a4);
        FUN_0041ad60(local_48,"../crypto/http/http_client.c",0x3a5);
        if (lVar2 == 0) {
          lVar2 = 0;
          goto LAB_006006c3;
        }
      }
      else {
LAB_006007b1:
        lVar2 = FUN_00618460(lVar2);
        if (lVar2 == 0) {
          FUN_0041ad60(local_50,"../crypto/http/http_client.c",0x3a4,pcVar4);
          lVar2 = 0;
          FUN_0041ad60(local_48,"../crypto/http/http_client.c",0x3a5);
          goto LAB_006006c3;
        }
        FUN_004abd40(lVar2,100,1);
        FUN_0041ad60(local_50,"../crypto/http/http_client.c",0x3a4);
        FUN_0041ad60(local_48,"../crypto/http/http_client.c",0x3a5);
      }
      FUN_0051f000();
      iVar1 = FUN_004ac730(lVar2,param_11,0xffffffff);
      if (0 < iVar1) goto LAB_00600841;
      goto LAB_00600a52;
    }
  }
  else {
    if (param_3 != 0 || param_4 != 0) goto LAB_00600a15;
    FUN_0051f000();
    iVar1 = FUN_004ac730(param_6,param_11,0xffffffff);
    if (iVar1 < 1) goto LAB_0060063c;
    local_68 = 0;
    lVar2 = param_6;
LAB_00600841:
    lVar3 = lVar2;
    if ((param_8 == (code *)0x0) || (lVar3 = (*param_8)(lVar2,param_9,1,param_5), lVar3 != 0)) {
      lVar2 = FUN_005fed10(lVar3,lVar3,param_10);
      if (lVar2 != 0) {
        *(code **)(lVar2 + 0x28) = param_8;
        *(undefined8 *)(lVar2 + 0x30) = param_9;
        *(uint *)(lVar2 + 0x14) = (uint)(param_6 == 0);
        *(int *)(lVar2 + 0x38) = param_5;
        if (local_68 == 0) {
LAB_0060065a:
          if (param_1 != 0) {
            lVar3 = FUN_0041c2c0(param_1,"../crypto/http/http_client.c",0x164);
            *(long *)(lVar2 + 0x48) = lVar3;
            if (lVar3 == 0) goto LAB_006008da;
          }
          if (param_2 != (char *)0x0) {
            lVar3 = FUN_0041c2c0(param_2,"../crypto/http/http_client.c",0x167);
            *(long *)(lVar2 + 0x50) = lVar3;
            if (lVar3 == 0) goto LAB_006008da;
          }
          if (param_11 < 1) {
            lVar3 = 0;
          }
          else {
            lVar3 = FUN_007607a0(0);
            lVar3 = param_11 + lVar3;
          }
          *(long *)(lVar2 + 0xb0) = lVar3;
          FUN_0051f050();
          goto LAB_006006c3;
        }
        lVar3 = FUN_0041c2c0(local_68,"../crypto/http/http_client.c",0x161);
        *(long *)(lVar2 + 0x40) = lVar3;
        if (lVar3 != 0) goto LAB_0060065a;
LAB_006008da:
        FUN_005fee20(lVar2);
      }
    }
    else if (param_6 == 0) {
LAB_00600a52:
      FUN_004ac4a0(lVar2);
    }
LAB_0060063c:
    FUN_0051f1a0();
  }
  lVar2 = 0;
LAB_006006c3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar2;
}

