
undefined4
FUN_006024a0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
            long *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
            undefined8 *param_9)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  undefined4 local_54;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  iVar2 = FUN_00601c30(param_1,&local_50,param_3,param_4,&local_48,param_6,param_7,param_8,param_9);
  pcVar1 = local_50;
  if (iVar2 != 0) {
    iVar2 = thunk_FUN_00712780(local_50,"https");
    if (iVar2 == 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      FUN_0041ad60(pcVar1,"../crypto/http/http_lib.c",0xd1);
      if ((*local_48 != '0') || (local_48[1] != '\0')) {
LAB_006026f9:
        if (param_5 == (long *)0x0) {
          FUN_0041ad60(local_48,"../crypto/http/http_lib.c",0xe4);
          uVar4 = 1;
        }
        else {
          *param_5 = (long)local_48;
          uVar4 = 1;
        }
        goto LAB_00602707;
      }
      FUN_0041ad60(local_48,"../crypto/http/http_lib.c",0xd5);
      local_48 = "443";
LAB_006025ac:
      iVar2 = FUN_006f4d00(local_48,"%d",&local_54);
      if (iVar2 == 1) {
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = local_54;
        }
        uVar4 = 1;
        if (param_5 == (long *)0x0) goto LAB_00602707;
        lVar3 = FUN_0041c2c0(local_48,"../crypto/http/http_lib.c",0xdc);
        *param_5 = lVar3;
        if (lVar3 != 0) goto LAB_00602707;
      }
    }
    else {
      if (*pcVar1 == '\0') {
LAB_006026db:
        FUN_0041ad60(pcVar1,"../crypto/http/http_lib.c",0xd1);
        if ((*local_48 != '0') || (local_48[1] != '\0')) goto LAB_006026f9;
        FUN_0041ad60(local_48,"../crypto/http/http_lib.c",0xd5);
        local_48 = "80";
        goto LAB_006025ac;
      }
      iVar2 = thunk_FUN_00712780(pcVar1,&DAT_0081aaea);
      if (iVar2 == 0) goto LAB_006026db;
      FUN_0051f420(pcVar1);
      FUN_0051f540("../crypto/http/http_lib.c",0xcc,"OSSL_HTTP_parse_url");
      FUN_0051f8f0(0x3d,0x7c,0);
      FUN_0041ad60(local_50,"../crypto/http/http_lib.c",0xcd);
      FUN_0041ad60(local_48,"../crypto/http/http_lib.c",0xce);
    }
    if (param_3 != (undefined8 *)0x0) {
      FUN_0041ad60(*param_3,"../crypto/http/http_lib.c",0x22);
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      FUN_0041ad60(*param_4,"../crypto/http/http_lib.c",0x22);
      *param_4 = 0;
    }
    if (param_7 != (undefined8 *)0x0) {
      FUN_0041ad60(*param_7,"../crypto/http/http_lib.c",0x22);
      *param_7 = 0;
    }
    if (param_8 != (undefined8 *)0x0) {
      FUN_0041ad60(*param_8,"../crypto/http/http_lib.c",0x22);
      *param_8 = 0;
    }
    if (param_9 != (undefined8 *)0x0) {
      FUN_0041ad60(*param_9,"../crypto/http/http_lib.c",0x22);
      *param_9 = 0;
    }
  }
  uVar4 = 0;
LAB_00602707:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

