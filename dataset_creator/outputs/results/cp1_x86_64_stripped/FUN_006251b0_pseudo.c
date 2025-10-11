
long * FUN_006251b0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  plVar1 = param_1 + 2;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar7 = *param_2;
  *param_1 = (long)plVar1;
  plVar6 = *(long **)(lVar7 + 0x20);
  param_1[1] = 0;
  lVar7 = *plVar6;
  if (lVar7 == 0) {
    FUN_0069ef10(param_1,0,0,1,0x2a);
  }
  else {
    if (plVar6[1] != 0) {
      uVar8 = 0;
      lVar9 = lVar7;
      do {
        uVar8 = uVar8 + 1;
        lVar2 = plVar6[uVar8];
        iVar4 = thunk_FUN_00712780(lVar9,lVar2);
        if (iVar4 != 0) {
          FUN_0069e840(param_1,0x80);
          puVar3 = PTR_PTR_00919060;
          uVar5 = *(undefined8 *)PTR_PTR_00919060;
          uVar8 = thunk_FUN_007129d0(uVar5);
          if (0x3fffffffffffffffU - param_1[1] < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00403998("basic_string::append");
          }
          FUN_0069fc40(param_1,uVar5);
          lVar7 = param_1[1];
          plVar6 = (long *)*param_1;
          if (plVar1 == plVar6) {
            uVar8 = 0xf;
          }
          else {
            uVar8 = param_1[2];
          }
          if (uVar8 < lVar7 + 1U) {
            FUN_0069e300(param_1,lVar7,0,0,1);
            plVar6 = (long *)*param_1;
          }
          *(undefined1 *)((long)plVar6 + lVar7) = 0x3d;
          param_1[1] = lVar7 + 1U;
          *(undefined1 *)(*param_1 + 1 + lVar7) = 0;
          uVar5 = **(undefined8 **)(*param_2 + 0x20);
          uVar8 = thunk_FUN_007129d0(uVar5);
          if (uVar8 <= 0x3fffffffffffffffU - param_1[1]) {
            FUN_0069fc40(param_1,uVar5);
            lVar7 = 8;
            while( true ) {
              lVar9 = param_1[1];
              plVar6 = (long *)*param_1;
              if (plVar1 == plVar6) {
                uVar8 = 0xf;
              }
              else {
                uVar8 = param_1[2];
              }
              if (uVar8 < lVar9 + 1U) {
                FUN_0069e300(param_1,lVar9,0,0,1);
                plVar6 = (long *)*param_1;
              }
              *(undefined1 *)((long)plVar6 + lVar9) = 0x3b;
              param_1[1] = lVar9 + 1U;
              *(undefined1 *)(*param_1 + 1 + lVar9) = 0;
              uVar5 = *(undefined8 *)(puVar3 + lVar7);
              uVar8 = thunk_FUN_007129d0(uVar5);
              if (0x3fffffffffffffffU - param_1[1] < uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00403998("basic_string::append");
              }
              FUN_0069fc40(param_1,uVar5);
              lVar9 = param_1[1];
              plVar6 = (long *)*param_1;
              if (plVar1 == plVar6) {
                uVar8 = 0xf;
              }
              else {
                uVar8 = param_1[2];
              }
              if (uVar8 < lVar9 + 1U) {
                FUN_0069e300(param_1,lVar9,0,0,1);
                plVar6 = (long *)*param_1;
              }
              *(undefined1 *)((long)plVar6 + lVar9) = 0x3d;
              param_1[1] = lVar9 + 1U;
              *(undefined1 *)(*param_1 + 1 + lVar9) = 0;
              uVar5 = *(undefined8 *)(*(long *)(*param_2 + 0x20) + lVar7);
              uVar8 = thunk_FUN_007129d0(uVar5);
              if (0x3fffffffffffffffU - param_1[1] < uVar8) break;
              FUN_0069fc40(param_1,uVar5);
              lVar7 = lVar7 + 8;
              if (lVar7 == 0x60) {
                return param_1;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_00403998("basic_string::append");
          }
                    /* WARNING: Subroutine does not return */
          FUN_00403998("basic_string::append");
        }
        lVar9 = lVar2;
      } while (uVar8 < 0xb);
    }
    uVar5 = thunk_FUN_007129d0(lVar7);
                    /* try { // try from 00625243 to 006254e9 has its CatchHandler @ 006254ea */
    FUN_0069f220(param_1,0,0,lVar7,uVar5);
  }
  return param_1;
}

