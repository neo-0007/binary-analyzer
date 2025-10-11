
undefined1  [16]
FUN_0067c230(long *param_1,long *param_2,ulong param_3,long param_4,char param_5,undefined8 param_6,
            byte *param_7,byte *param_8)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  ulong uVar9;
  uint7 uVar10;
  undefined1 auVar11 [16];
  
  cVar6 = (char)param_3;
  plVar4 = (long *)FUN_0067c1e0(param_4 + 0xd0);
  if (param_7 != param_8) {
    uVar9 = param_3 & 0xff;
    do {
      while( true ) {
        bVar3 = *param_7;
        bVar2 = *(byte *)((long)plVar4 + (ulong)bVar3 + 0x139);
        cVar6 = (char)uVar9;
        if (bVar2 != 0) break;
        bVar2 = bVar3;
        if (*(code **)(*plVar4 + 0x40) != FUN_0063d3c0) {
          bVar2 = (**(code **)(*plVar4 + 0x40))(plVar4,(int)(char)bVar3,0);
        }
        if (bVar2 != 0) {
          *(byte *)((long)plVar4 + (ulong)bVar3 + 0x139) = bVar2;
          break;
        }
LAB_0067c2a8:
        if (cVar6 == '\0') {
          if ((byte *)param_2[5] < (byte *)param_2[6]) {
            *(byte *)param_2[5] = *param_7;
            param_2[5] = param_2[5] + 1;
          }
          else {
            iVar5 = (**(code **)(*param_2 + 0x68))(param_2);
            uVar9 = (ulong)(iVar5 == -1);
          }
        }
        cVar6 = (char)uVar9;
        param_7 = param_7 + 1;
        if (param_8 == param_7) goto LAB_0067c3b2;
      }
      if (bVar2 != 0x25) goto LAB_0067c2a8;
      pbVar7 = param_7 + 1;
      if (param_8 == pbVar7) break;
      bVar3 = param_7[1];
      bVar2 = *(byte *)((long)plVar4 + (ulong)bVar3 + 0x139);
      if (bVar2 == 0) {
        bVar2 = bVar3;
        if (*(code **)(*plVar4 + 0x40) != FUN_0063d3c0) {
          bVar2 = (**(code **)(*plVar4 + 0x40))(plVar4,(int)(char)bVar3,0);
        }
        if (bVar2 != 0) {
          *(byte *)((long)plVar4 + (ulong)bVar3 + 0x139) = bVar2;
          goto LAB_0067c340;
        }
        iVar8 = 0;
        iVar5 = 0;
      }
      else {
LAB_0067c340:
        if ((bVar2 == 0x45) || (bVar2 == 0x4f)) {
          pbVar7 = param_7 + 2;
          if (param_8 == pbVar7) break;
          bVar3 = param_7[2];
          uVar9 = (ulong)bVar3;
          iVar5 = (int)(char)bVar2;
          cVar1 = *(char *)((long)plVar4 + uVar9 + 0x139);
          iVar8 = (int)cVar1;
          if (cVar1 == '\0') {
            iVar8 = (int)(char)bVar3;
            if (*(code **)(*plVar4 + 0x40) != FUN_0063d3c0) {
              bVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,iVar8,0);
              iVar8 = (int)(char)bVar3;
            }
            if (bVar3 != 0) {
              *(byte *)((long)plVar4 + uVar9 + 0x139) = bVar3;
            }
          }
        }
        else {
          iVar8 = (int)(char)bVar2;
          iVar5 = 0;
        }
      }
      uVar10 = (uint7)(param_3 >> 8);
      param_7 = pbVar7 + 1;
      auVar11 = (**(code **)(*param_1 + 0x10))
                          (param_1,param_2,CONCAT71(uVar10,cVar6),param_4,(int)param_5,param_6,iVar8
                           ,iVar5);
      uVar9 = auVar11._8_8_;
      param_2 = auVar11._0_8_;
      cVar6 = auVar11[8];
      param_3 = (ulong)uVar10 << 8;
    } while (param_8 != param_7);
  }
LAB_0067c3b2:
  auVar11._9_7_ = (int7)(param_3 >> 8);
  auVar11[8] = cVar6;
  auVar11._0_8_ = param_2;
  return auVar11;
}

