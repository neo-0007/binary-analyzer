
undefined1  [16]
FUN_006a4bf0(long *param_1,long *param_2,ulong param_3,long param_4,undefined4 param_5,
            undefined8 param_6,int *param_7,int *param_8)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  uint7 uVar8;
  undefined1 auVar9 [16];
  int *local_68;
  
  uVar7 = param_3 & 0xffffffff;
  cVar6 = (char)uVar7;
  plVar4 = (long *)FUN_006a4ba0(param_4 + 0xd0);
  if (param_7 != param_8) {
    do {
      while( true ) {
        cVar2 = (**(code **)(*plVar4 + 0x60))(plVar4,*param_7,0);
        cVar6 = (char)uVar7;
        if (cVar2 != '%') break;
        local_68 = param_7 + 1;
        if (param_8 == local_68) goto LAB_006a4cf3;
        cVar2 = (**(code **)(*plVar4 + 0x60))(plVar4,param_7[1],0);
        if ((cVar2 == 'E') || (iVar5 = 0, cVar3 = cVar2, cVar2 == 'O')) {
          local_68 = param_7 + 2;
          if (param_8 == local_68) goto LAB_006a4cf3;
          cVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,param_7[2],0);
          iVar5 = (int)cVar2;
        }
        uVar8 = (uint7)(param_3 >> 8);
        auVar9 = (**(code **)(*param_1 + 0x10))
                           (param_1,param_2,CONCAT71(uVar8,cVar6),param_4,param_5,param_6,(int)cVar3
                            ,iVar5);
        uVar7 = auVar9._8_8_;
        param_2 = auVar9._0_8_;
        cVar6 = auVar9[8];
        param_3 = (ulong)uVar8 << 8;
        param_7 = local_68 + 1;
        if (param_8 == param_7) goto LAB_006a4cf3;
      }
      if (cVar6 == '\0') {
        piVar1 = (int *)param_2[5];
        iVar5 = *param_7;
        if (piVar1 < (int *)param_2[6]) {
          *piVar1 = iVar5;
          param_2[5] = (long)(piVar1 + 1);
        }
        else {
          iVar5 = (**(code **)(*param_2 + 0x68))(param_2);
        }
        uVar7 = (ulong)(iVar5 == -1);
      }
      cVar6 = (char)uVar7;
      param_7 = param_7 + 1;
    } while (param_8 != param_7);
  }
LAB_006a4cf3:
  auVar9._9_7_ = (int7)(param_3 >> 8);
  auVar9[8] = cVar6;
  auVar9._0_8_ = param_2;
  return auVar9;
}

