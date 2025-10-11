
long * FUN_005ae360(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_0041aec0(0x30,"../crypto/x509/x_pubkey.c",0x11d);
  local_38 = plVar2;
  if (plVar2 != (long *)0x0) {
    lVar3 = param_1[4];
    plVar2[3] = param_1[3];
    FUN_0041ad60(plVar2[4],"../crypto/x509/x_pubkey.c",0x34);
    plVar2[4] = 0;
    if (lVar3 != 0) {
      lVar3 = FUN_0041c2c0(lVar3,"../crypto/x509/x_pubkey.c",0x37);
      plVar2[4] = lVar3;
      if (lVar3 == 0) goto LAB_005ae450;
    }
    lVar3 = FUN_004a8860(*param_1);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN_004a7820();
      plVar2[1] = lVar3;
      if (lVar3 != 0) {
        iVar1 = thunk_FUN_004a1fa0(lVar3,*(undefined8 *)((undefined4 *)param_1[1] + 2),
                                   *(undefined4 *)param_1[1]);
        if (iVar1 != 0) {
          if (param_1[2] != 0) {
            FUN_0051f000();
            lVar3 = FUN_0040fa00(param_1[2]);
            plVar2[2] = lVar3;
            if (lVar3 == 0) {
              *(byte *)(plVar2 + 5) = *(byte *)(plVar2 + 5) | 1;
              iVar1 = FUN_005ada70(plVar2 + 2,plVar2);
              if (iVar1 < 1) {
                plVar2 = (long *)0x0;
                FUN_005adbf0(&local_38,&DAT_00912d80);
                FUN_0051f1a0();
                goto LAB_005ae48e;
              }
            }
            FUN_0051f050();
          }
          goto LAB_005ae48e;
        }
      }
    }
  }
LAB_005ae450:
  plVar2 = (long *)0x0;
  FUN_005adbf0(&local_38,&DAT_00912d80);
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x_pubkey.c",0x128,"X509_PUBKEY_dup");
  FUN_0051f8f0(0xb,0xc0100,0);
LAB_005ae48e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

