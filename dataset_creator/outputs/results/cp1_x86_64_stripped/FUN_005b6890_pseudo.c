
int FUN_005b6890(code *param_1,long param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 uStack_80;
  char local_61;
  long local_60;
  undefined4 local_58 [2];
  undefined4 *local_50;
  long local_40;
  
  iVar3 = param_4[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_61 = '\0';
  if ((param_3 & 0x40) == 0) {
    iVar6 = 0;
LAB_005b68cf:
    if ((param_3 & 0x80) == 0) {
      if ((param_3 & 0x20) == 0) {
        if (0x1d < iVar3 - 1U) {
LAB_005b6a20:
          if ((param_3 & 0x100) != 0) goto LAB_005b6a29;
          goto LAB_005b68e1;
        }
        bVar1 = (&DAT_0080e790)[iVar3];
        if (bVar1 == 0xff) goto LAB_005b6a20;
        iVar3 = (int)(char)bVar1;
        if ((param_3 & 0x10) != 0) {
          iVar3 = 1;
          if (bVar1 != 0) {
            iVar3 = (int)(char)(bVar1 | 8);
          }
        }
      }
      else {
LAB_005b68e1:
        iVar3 = (-(uint)((param_3 & 0x10) == 0) & 0xfffffff8) + 9;
      }
      iVar2 = FUN_005b65b0(*(undefined8 *)(param_4 + 2),*param_4,iVar3,param_3 & 0x40f,&local_61,
                           param_1,0);
      if (-1 < iVar2) {
        iVar6 = iVar6 + iVar2;
        if (local_61 == '\0') {
          if (param_2 == 0) goto LAB_005b69b3;
        }
        else {
          iVar6 = iVar6 + 2;
          if (param_2 == 0) goto LAB_005b69b3;
          uStack_80 = 0x5b695d;
          iVar2 = (*param_1)(param_2,"\"",1);
          if (iVar2 == 0) goto LAB_005b6b70;
        }
        iVar3 = FUN_005b65b0(*(undefined8 *)(param_4 + 2),*param_4,iVar3,param_3 & 0x40f,0,param_1);
        if ((-1 < iVar3) &&
           ((local_61 == '\0' || (iVar3 = (*param_1)(param_2,"\"",1,uStack_80), iVar3 != 0))))
        goto LAB_005b69b3;
      }
    }
    else {
LAB_005b6a29:
      iVar3 = (*param_1)(param_2,"#",1);
      if (iVar3 != 0) {
        if ((param_3 & 0x200) == 0) {
          iVar3 = FUN_005b62d0(param_1,param_2,*(undefined8 *)(param_4 + 2),*param_4);
joined_r0x005b6b67:
          if (-1 < iVar3) {
            iVar6 = iVar6 + iVar3 + 1;
            goto LAB_005b69b3;
          }
        }
        else {
          local_58[0] = param_4[1];
          local_50 = param_4;
          iVar3 = FUN_004a7ee0(local_58,0);
          if (0 < iVar3) {
            lVar4 = FUN_0041ad90((long)iVar3,"../crypto/asn1/a_strex.c",0x11d);
            if (lVar4 != 0) {
              local_60 = lVar4;
              FUN_004a7ee0(local_58,&local_60);
              iVar3 = FUN_005b62d0(param_1,param_2,lVar4,iVar3);
              FUN_0041ad60(lVar4,"../crypto/asn1/a_strex.c",0x124);
              goto joined_r0x005b6b67;
            }
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/a_strex.c",0x11e,"do_dump");
            FUN_0051f8f0(0xd,0xc0100,0);
          }
        }
      }
    }
  }
  else {
    uVar5 = FUN_005b93a0(iVar3);
    iVar6 = thunk_FUN_007129d0(uVar5);
    iVar2 = (*param_1)(param_2,uVar5,iVar6);
    if (iVar2 != 0) {
      uStack_80 = 0x5b6b2b;
      iVar2 = (*param_1)(param_2,":",1);
      if (iVar2 != 0) {
        iVar6 = iVar6 + 1;
        goto LAB_005b68cf;
      }
    }
  }
LAB_005b6b70:
  iVar6 = -1;
LAB_005b69b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

