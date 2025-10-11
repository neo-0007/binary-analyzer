
char * FUN_006de960(int param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  undefined *puVar9;
  bool bVar10;
  
  lVar5 = 0;
  lVar7 = 0;
  bVar10 = true;
  if (param_1 != 6) {
    do {
      if (lVar5 != 6) {
        if (param_1 == (int)lVar5) {
          puVar9 = (undefined *)*param_2;
        }
        else {
          puVar9 = (&PTR_s_C_0093da40)[lVar5];
        }
        lVar3 = thunk_FUN_007129d0(puVar9);
        lVar7 = lVar7 + 2 + (ulong)(byte)(&DAT_00823a08)[lVar5] + lVar3;
        if ((bVar10) && (puVar9 != (undefined *)*param_2)) {
          iVar2 = thunk_FUN_00712780(puVar9);
          bVar10 = iVar2 == 0;
        }
        if (lVar5 == 0xc) goto LAB_006dea51;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  }
  do {
    if (lVar5 != 6) {
      lVar1 = param_2[lVar5];
      lVar3 = thunk_FUN_007129d0();
      lVar7 = lVar7 + 2 + (ulong)(byte)(&DAT_00823a08)[lVar5] + lVar3;
      if ((bVar10) && (*param_2 != lVar1)) {
        iVar2 = thunk_FUN_00712780();
        bVar10 = iVar2 == 0;
      }
      if (lVar5 == 0xc) break;
    }
    lVar5 = lVar5 + 1;
  } while( true );
LAB_006dea51:
  if (bVar10) {
    lVar7 = *param_2;
    iVar2 = thunk_FUN_00712780(lVar7,"C");
    if (iVar2 == 0) {
      return "C";
    }
    iVar2 = thunk_FUN_00712780(lVar7,"POSIX");
    if (iVar2 == 0) {
      return "C";
    }
    lVar5 = FUN_007101b0(lVar3 + 1);
    if (lVar5 != 0) {
      pcVar6 = (char *)thunk_FUN_00713a50(lVar5,lVar7,lVar3 + 1);
      return pcVar6;
    }
  }
  else {
    pcVar6 = (char *)FUN_007101b0(lVar7);
    if (pcVar6 != (char *)0x0) {
      if (param_1 == 6) {
        lVar7 = 0;
        pcVar8 = pcVar6;
        do {
          if (lVar7 != 6) {
            lVar5 = param_2[lVar7];
            puVar4 = (undefined1 *)
                     thunk_FUN_00713930(pcVar8,"LC_COLLATE" + (byte)(&DAT_00823a20)[lVar7]);
            *puVar4 = 0x3d;
            puVar4 = (undefined1 *)thunk_FUN_00713930(puVar4 + 1,lVar5);
            *puVar4 = 0x3b;
            pcVar8 = puVar4 + 1;
            if (lVar7 == 0xc) goto LAB_006deb78;
          }
          lVar7 = lVar7 + 1;
        } while( true );
      }
      lVar7 = 0;
      pcVar8 = pcVar6;
      do {
        if (lVar7 != 6) {
          if (param_1 == (int)lVar7) {
            puVar9 = (undefined *)*param_2;
          }
          else {
            puVar9 = (&PTR_s_C_0093da40)[lVar7];
          }
          puVar4 = (undefined1 *)
                   thunk_FUN_00713930(pcVar8,"LC_COLLATE" + (byte)(&DAT_00823a20)[lVar7]);
          *puVar4 = 0x3d;
          puVar4 = (undefined1 *)thunk_FUN_00713930(puVar4 + 1,puVar9);
          *puVar4 = 0x3b;
          pcVar8 = puVar4 + 1;
          if (lVar7 == 0xc) {
LAB_006deb78:
            *puVar4 = 0;
            return pcVar6;
          }
        }
        lVar7 = lVar7 + 1;
      } while( true );
    }
  }
  return (char *)0x0;
}

