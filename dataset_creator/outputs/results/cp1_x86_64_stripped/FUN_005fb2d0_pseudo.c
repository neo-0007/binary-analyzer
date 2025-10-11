
int FUN_005fb2d0(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                uint param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_68 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_004222c0(DAT_00941008);
  if (iVar2 == 0) goto LAB_005fb494;
  if (*param_1 == 0) {
    lVar5 = FUN_00545610(FUN_005fb1b0,FUN_005fb1c0);
    if (lVar5 != 0) {
      *param_1 = lVar5;
      FUN_0051a5b0(param_2);
      goto LAB_005fb329;
    }
LAB_005fb478:
    iVar2 = 0;
  }
  else {
LAB_005fb329:
    if (param_5 != 0) {
      puVar1 = param_4 + param_5;
      do {
        while( true ) {
          local_68[0] = *param_4;
          puVar3 = (undefined4 *)FUN_00545b60(*param_1,local_68);
          if (puVar3 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)FUN_0041ad90(0x20,"../crypto/engine/eng_table.c",0x67);
            if (puVar4 == (undefined4 *)0x0) goto LAB_005fb478;
            puVar4[6] = 1;
            *puVar4 = *param_4;
            lVar5 = FUN_00436410();
            *(long *)(puVar4 + 2) = lVar5;
            if (lVar5 == 0) {
              FUN_0041ad60(puVar4,"../crypto/engine/eng_table.c",0x6e);
              iVar2 = 0;
              goto LAB_005fb47b;
            }
            *(undefined8 *)(puVar4 + 4) = 0;
            FUN_005457f0(*param_1,puVar4);
            puVar3 = (undefined4 *)FUN_00545b60(*param_1,local_68);
            if (puVar4 != puVar3) {
              FUN_004360b0(*(undefined8 *)(puVar4 + 2));
              FUN_0041ad60(puVar4,"../crypto/engine/eng_table.c",0x75);
              goto LAB_005fb478;
            }
          }
          FUN_00435e40(*(undefined8 *)(puVar3 + 2),param_3);
          iVar2 = FUN_00435f80(*(undefined8 *)(puVar3 + 2),param_3);
          if (iVar2 == 0) goto LAB_005fb478;
          puVar3[6] = 0;
          if (param_6 == 0) break;
          iVar2 = FUN_0051a070(param_3);
          if (iVar2 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/engine/eng_table.c",0x84,"engine_table_register");
            FUN_0051f8f0(0x26,0x6d,0);
            iVar2 = 0;
            goto LAB_005fb47b;
          }
          if (*(long *)(puVar3 + 4) != 0) {
            FUN_0051a0b0(*(long *)(puVar3 + 4),0);
          }
          *(undefined8 *)(puVar3 + 4) = param_3;
          param_4 = param_4 + 1;
          puVar3[6] = 1;
          if (puVar1 == param_4) goto LAB_005fb3dc;
        }
        param_4 = param_4 + 1;
      } while (puVar1 != param_4);
    }
LAB_005fb3dc:
    iVar2 = 1;
  }
LAB_005fb47b:
  FUN_004222e0(DAT_00941008);
LAB_005fb494:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

