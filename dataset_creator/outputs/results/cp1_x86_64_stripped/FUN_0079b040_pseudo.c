
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0079b040(long param_1,long param_2,int param_3,int param_4,char param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  ulong local_188;
  long local_160;
  long local_158 [2];
  undefined1 local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = param_4 < 1;
  local_160 = param_2;
  if ((param_5 == '\x01') || (bVar1)) goto LAB_0079b11e;
  local_158[1] = 0;
  local_158[0] = param_2;
  if (param_3 < 0) {
    uVar5 = FUN_00756e10(0,local_158,0,local_158 + 1);
    if (uVar5 < (ulong)(long)param_4) {
LAB_0079b45d:
      iVar2 = param_4 - (int)uVar5;
      if (0 < iVar2) goto LAB_0079b257;
LAB_0079b46c:
      if (-1 < (int)param_6) goto LAB_0079b11e;
    }
    else {
LAB_0079b11e:
      local_158[1] = 0;
      if (param_3 < 0) {
        if (local_160 == 0) goto LAB_0079b490;
        local_188 = 0;
        do {
          uVar5 = FUN_00756e10(local_148,&local_160,0x40,local_158 + 1);
          if (uVar5 == 0xffffffffffffffff) goto LAB_0079b298;
          if (uVar5 == 0) goto LAB_0079b3c0;
          if ((int)param_6 < 0) {
LAB_0079b4aa:
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("(size_t) done <= (size_t) INT_MAX","vfprintf-internal.c",0xee,
                         "outstring_func");
          }
          lVar3 = *(long *)(param_1 + 0xd8);
          if (0x827 < lVar3 - 0x93f160U) {
            FUN_00703130();
          }
          uVar6 = (**(code **)(lVar3 + 0x38))(param_1,local_148,uVar5);
          if (uVar6 != uVar5) goto LAB_0079b298;
          uVar4 = (long)(int)param_6 + uVar5;
          param_6 = (uint)uVar4;
          if (uVar4 != (long)(int)param_6 || uVar4 + 0x8000000000000000 < uVar5) goto LAB_0079b284;
          if ((int)param_6 < 0) goto LAB_0079b488;
          local_188 = local_188 + uVar5;
        } while (local_160 != 0);
        uVar4 = uVar4 & 0xffffffff;
LAB_0079b3c3:
        if (((bVar1) || (param_5 == '\0')) || ((ulong)(long)param_4 <= local_188))
        goto LAB_0079b29e;
LAB_0079b3ec:
        param_4 = param_4 - (int)local_188;
        if (param_4 < 1) goto LAB_0079b29e;
        lVar3 = FUN_007a2150(param_1,0x20,(long)param_4);
        if (param_4 == lVar3) {
          iVar2 = (int)uVar4;
          if ((iVar2 < 0) || (uVar4 = (ulong)(uint)(iVar2 + param_4), !SCARRY4(iVar2,param_4)))
          goto LAB_0079b29e;
          goto LAB_0079b284;
        }
        goto LAB_0079b298;
      }
      uVar5 = (ulong)param_3;
      if ((local_160 != 0) && (uVar5 != 0)) {
        local_188 = 0;
        while( true ) {
          uVar6 = 0x40;
          if (uVar5 < 0x40) {
            uVar6 = uVar5;
          }
          uVar6 = FUN_00756e10(local_148,&local_160,uVar6,local_158 + 1);
          if (uVar6 == 0xffffffffffffffff) goto LAB_0079b298;
          if (uVar6 == 0) break;
          if ((int)param_6 < 0) goto LAB_0079b4aa;
          lVar3 = *(long *)(param_1 + 0xd8);
          if (0x827 < lVar3 - 0x93f160U) {
            FUN_00703130();
          }
          uVar4 = (**(code **)(lVar3 + 0x38))(param_1,local_148,uVar6);
          if (uVar6 != uVar4) goto LAB_0079b298;
          uVar4 = (long)(int)param_6 + uVar6;
          param_6 = (uint)uVar4;
          if (uVar4 != (long)(int)param_6 || uVar4 + 0x8000000000000000 < uVar6) goto LAB_0079b284;
          if ((int)param_6 < 0) goto LAB_0079b488;
          local_188 = local_188 + uVar6;
          uVar5 = uVar5 - uVar6;
          if ((local_160 == 0) || (uVar5 == 0)) break;
        }
LAB_0079b3c0:
        uVar4 = (ulong)param_6;
        goto LAB_0079b3c3;
      }
LAB_0079b490:
      if (!bVar1) {
        local_188._0_4_ = 0;
        uVar4 = (ulong)param_6;
        if (param_5 != '\0') goto LAB_0079b3ec;
      }
    }
LAB_0079b474:
    uVar4 = (ulong)param_6;
  }
  else {
    uVar6 = (ulong)param_3;
    uVar5 = 0;
    iVar2 = param_4;
    if (param_3 != 0) {
      do {
        if (local_158[0] == 0) break;
        uVar4 = 0x40;
        if (uVar6 < 0x40) {
          uVar4 = uVar6;
        }
        lVar3 = FUN_00756e10(local_148,local_158,uVar4,local_158 + 1);
        if (lVar3 == -1) goto LAB_0079b298;
        if (lVar3 == 0) break;
        uVar5 = uVar5 + lVar3;
        uVar6 = uVar6 - lVar3;
      } while (uVar6 != 0);
      if (uVar5 < (ulong)(long)param_4) goto LAB_0079b45d;
      goto LAB_0079b11e;
    }
LAB_0079b257:
    lVar3 = FUN_007a2150(param_1,0x20,(long)iVar2);
    if (iVar2 == lVar3) {
      if ((int)param_6 < 0) goto LAB_0079b474;
      bVar7 = SCARRY4(param_6,iVar2);
      param_6 = param_6 + iVar2;
      if (!bVar7) goto LAB_0079b46c;
LAB_0079b284:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
    }
LAB_0079b298:
    uVar4 = 0xffffffff;
  }
LAB_0079b29e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_0079b488:
  uVar4 = uVar4 & 0xffffffff;
  goto LAB_0079b29e;
}

