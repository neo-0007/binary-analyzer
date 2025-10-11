
undefined8 FUN_006077f0(undefined8 param_1,int param_2,undefined1 param_3,int *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined1 local_58 [14];
  char local_4a [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < *param_4) {
    if (param_2 == 1) {
      iVar4 = FUN_006075c0(local_58,param_4,4,param_3);
      if (iVar4 != 0) {
        FUN_004ae9e0(param_1,"%d.%d.%d.%d",local_58[0],local_58[1],local_58[2],local_58[3]);
        uVar5 = 1;
        goto LAB_00607896;
      }
    }
    else {
      if (param_2 != 2) {
        if (*param_4 != 0) {
          lVar8 = 0;
          pcVar7 = "";
          uVar2 = **(undefined1 **)(param_4 + 2);
          while( true ) {
            lVar8 = lVar8 + 1;
            FUN_004ae9e0(param_1,&DAT_0081ade4,pcVar7,uVar2);
            if (*param_4 <= (int)lVar8) break;
            pcVar7 = ":";
            uVar2 = *(undefined1 *)(*(long *)(param_4 + 2) + lVar8);
          }
        }
        FUN_004ae9e0(param_1,&DAT_0081adda,(uint)*(undefined8 *)(param_4 + 4) & 7);
        uVar5 = 1;
        goto LAB_00607896;
      }
      iVar4 = FUN_006075c0(local_58,param_4,0x10,param_3);
      if (iVar4 != 0) {
        pcVar7 = local_4a;
        iVar4 = 0x10;
        do {
          if ((pcVar7[1] != '\0') || (iVar6 = iVar4 + -2, *pcVar7 != '\0')) {
            lVar8 = 0;
            do {
              puVar1 = local_58 + lVar8;
              pcVar7 = ":";
              if (lVar8 == 0xe) {
                pcVar7 = "";
              }
              lVar3 = lVar8 + 1;
              lVar8 = lVar8 + 2;
              FUN_004ae9e0(param_1,&DAT_0081addf,CONCAT11(*puVar1,local_58[lVar3]),pcVar7);
            } while ((int)lVar8 < iVar4);
            if (iVar4 - 1U >> 1 != 7) {
              FUN_004ab870(param_1,":");
            }
            uVar5 = 1;
            goto LAB_00607896;
          }
          pcVar7 = pcVar7 + -2;
          iVar4 = iVar6;
        } while (iVar6 != 0);
        FUN_004ab870(param_1,":");
        FUN_004ab870(param_1,":");
        uVar5 = 1;
        goto LAB_00607896;
      }
    }
  }
  uVar5 = 0;
LAB_00607896:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

