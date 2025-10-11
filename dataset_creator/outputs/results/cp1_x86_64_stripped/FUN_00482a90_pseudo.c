
long FUN_00482a90(undefined8 param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  long local_110;
  char *local_f8;
  byte local_f0 [8];
  undefined8 uStack_e8;
  byte abStack_e0 [8];
  undefined1 local_d8 [24];
  uint local_c0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0051f000();
  local_f0[0] = local_f0[0] & 0xfe;
  local_f8 = param_2;
  iVar2 = FUN_0041ca00(param_2,"file:",5);
  if (iVar2 == 0) {
    pcVar7 = param_2 + 5;
    if ((param_2[5] == '/') && (param_2[6] == '/')) {
      pcVar7 = param_2 + 7;
      iVar2 = FUN_0041ca00(pcVar7,"localhost/",10);
      if (iVar2 == 0) {
        local_110 = 1;
        pcVar7 = param_2 + 0x10;
        lVar3 = 0;
      }
      else {
        local_110 = 1;
        lVar3 = 0;
        if (param_2[7] != '/') {
          FUN_0051f1a0();
          lVar3 = 0;
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/storemgmt/file_store.c",0xe8,"file_open");
          FUN_0051f8f0(0x39,0xdf,0);
          goto LAB_00482bd6;
        }
      }
    }
    else {
      local_110 = 2;
      lVar3 = 1;
    }
    *(char **)(local_f0 + lVar3 * 0x10 + -8) = pcVar7;
    local_f0[lVar3 * 0x10] = local_f0[lVar3 * 0x10] | 1;
    bVar1 = local_f0[0] & 1;
    pcVar7 = local_f8;
  }
  else {
    local_110 = 1;
    bVar1 = 0;
    pcVar7 = param_2;
  }
  lVar3 = 0;
  while( true ) {
    if ((bVar1 != 0) && (*pcVar7 != '/')) {
      FUN_0051f1a0();
      lVar3 = 0;
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/storemgmt/file_store.c",0x105,"file_open");
      FUN_0051f8f0(0x39,0xdb,"Given path=%s",pcVar7);
      goto LAB_00482bd6;
    }
    iVar2 = FUN_0076d7d0(pcVar7,local_d8);
    if (-1 < iVar2) {
      FUN_0051f050();
      if ((local_c0 & 0xf000) == 0x4000) {
        lVar3 = FUN_00482950(1,param_2,param_1);
        if (lVar3 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/storemgmt/file_store.c",0xaf,"file_open_dir");
          FUN_0051f8f0(0x39,0xc0100,0);
        }
        else {
          lVar4 = FUN_00546e80(lVar3 + 0x18,pcVar7);
          *(long *)(lVar3 + 0x30) = lVar4;
          piVar6 = (int *)FUN_006d2700();
          iVar2 = *piVar6;
          *(int *)(lVar3 + 0x38) = iVar2;
          if (lVar4 == 0) {
            if (iVar2 == 0) {
              *(undefined4 *)(lVar3 + 0x20) = 1;
            }
            else {
              FUN_0051f420();
              FUN_0051f540("../providers/implementations/storemgmt/file_store.c",0xb7,
                           "file_open_dir");
              FUN_0051f8f0(2,*(undefined4 *)(lVar3 + 0x38),"Calling OPENSSL_DIR_read(\"%s\")",pcVar7
                          );
              FUN_004829d0(lVar3);
              lVar3 = 0;
            }
          }
        }
        goto LAB_00482bd6;
      }
      lVar4 = FUN_004b0b90(pcVar7,&DAT_007e606a);
      if (lVar4 != 0) {
        lVar3 = FUN_00482950(0,param_2,param_1);
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x18) = lVar4;
          goto LAB_00482bd6;
        }
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/storemgmt/file_store.c",0x9e,"file_open_stream");
        FUN_0051f8f0(0x39,0xc0100,0);
      }
      FUN_004ac4a0(lVar4);
      lVar3 = 0;
      goto LAB_00482bd6;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/storemgmt/file_store.c",0x10b,"file_open");
    lVar3 = lVar3 + 1;
    puVar5 = (undefined4 *)FUN_006d2700();
    FUN_0051f8f0(2,*puVar5,"calling stat(%s)",pcVar7);
    if (local_110 == lVar3) break;
    pcVar7 = *(char **)(local_f0 + lVar3 * 0x10 + -8);
    bVar1 = local_f0[lVar3 * 0x10] & 1;
  }
  FUN_0051f1a0();
  lVar3 = 0;
LAB_00482bd6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

