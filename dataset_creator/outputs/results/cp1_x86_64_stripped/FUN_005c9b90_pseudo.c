
long FUN_005c9b90(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  
  lVar3 = thunk_FUN_007129d0();
LAB_005c9bb8:
  do {
    lVar4 = FUN_00546e80(param_2,param_1);
    if (lVar4 == 0) goto LAB_005c9cf4;
    uVar5 = thunk_FUN_007129d0(lVar4);
    if (uVar5 < 6) {
      if (uVar5 != 5) goto LAB_005c9bb8;
LAB_005c9be6:
      iVar2 = FUN_0041c9c0(lVar4 + -4 + uVar5,".cnf");
      if (iVar2 != 0) goto LAB_005c9bb8;
    }
    else {
      iVar2 = FUN_0041c9c0(lVar4 + -5 + uVar5,".conf");
      if (iVar2 != 0) goto LAB_005c9be6;
    }
    lVar1 = lVar3 + 2 + uVar5;
    pcVar6 = (char *)FUN_0041aec0(lVar1,"../crypto/conf/conf_def.c",0x353);
    if (pcVar6 == (char *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/conf/conf_def.c",0x355,"get_next_file");
      FUN_0051f8f0(0xe,0xc0100,0);
LAB_005c9cf4:
      FUN_00546f80(param_2);
      *param_2 = 0;
      return 0;
    }
    if (*pcVar6 == '\0') {
      FUN_0041c470(pcVar6,param_1,lVar1);
      FUN_0041c4d0(pcVar6,&DAT_00823afc,lVar1);
    }
    FUN_0041c4d0(pcVar6,lVar4,lVar1);
    lVar4 = FUN_004b0b90(pcVar6,"r");
    FUN_0041ad60(pcVar6,"../crypto/conf/conf_def.c",0x36b);
    if (lVar4 != 0) {
      return lVar4;
    }
  } while( true );
}

