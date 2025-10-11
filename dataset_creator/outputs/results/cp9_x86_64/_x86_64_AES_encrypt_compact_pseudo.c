
uint _x86_64_AES_encrypt_compact(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long unaff_R14;
  uint *unaff_R15;
  uint *in_stack_00000010;
  
  while( true ) {
    uVar1 = in_EAX ^ *unaff_R15;
    uVar3 = unaff_EBX ^ unaff_R15[1];
    param_4 = param_4 ^ unaff_R15[2];
    param_3 = param_3 ^ unaff_R15[3];
    unaff_R15 = unaff_R15 + 4;
    uVar7 = CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(param_3 >> 0x18)),
                     CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(param_4 >> 0x10 & 0xff)),
                              CONCAT11(*(undefined1 *)(unaff_R14 + (ulong)(uVar3 >> 8 & 0xff)),
                                       *(undefined1 *)(unaff_R14 + (ulong)(uVar1 & 0xff)))));
    uVar9 = CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(uVar1 >> 0x18)),
                     CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(param_3 >> 0x10 & 0xff)),
                              CONCAT11(*(undefined1 *)(unaff_R14 + (ulong)(param_4 >> 8 & 0xff)),
                                       *(undefined1 *)(unaff_R14 + (ulong)(uVar3 & 0xff)))));
    uVar2 = CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(uVar3 >> 0x18)),
                     CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(uVar1 >> 0x10 & 0xff)),
                              CONCAT11(*(undefined1 *)(unaff_R14 + (ulong)(param_3 >> 8 & 0xff)),
                                       *(undefined1 *)(unaff_R14 + (ulong)(param_4 & 0xff)))));
    uVar1 = CONCAT13(*(undefined1 *)(unaff_R14 + (ulong)(param_4 >> 0x18)),
                     CONCAT12(*(undefined1 *)(unaff_R14 + (ulong)(uVar3 >> 0x10 & 0xff)),
                              CONCAT11(*(undefined1 *)(unaff_R14 + (ulong)(uVar1 >> 8 & 0xff)),
                                       *(undefined1 *)(unaff_R14 + (ulong)(param_3 & 0xff)))));
    if (unaff_R15 == in_stack_00000010) break;
    uVar5 = uVar7 * 2 & 0xfefefefe ^ (uVar7 & 0x80808080) - ((uVar7 & 0x80808080) >> 7) & 0x1b1b1b1b
    ;
    uVar6 = uVar9 * 2 & 0xfefefefe ^ (uVar9 & 0x80808080) - ((uVar9 & 0x80808080) >> 7) & 0x1b1b1b1b
    ;
    uVar3 = uVar7 ^ uVar5;
    uVar4 = uVar9 ^ uVar6;
    uVar8 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar10 = uVar9 >> 0x10 | uVar9 << 0x10;
    in_EAX = (uVar3 << 0x18 | uVar3 >> 8) ^ uVar5 ^ uVar8 ^ (uVar8 >> 8 | (uVar7 >> 0x10) << 0x18);
    unaff_EBX = (uVar4 << 0x18 | uVar4 >> 8) ^ uVar6 ^ uVar10 ^
                (uVar10 >> 8 | (uVar9 >> 0x10) << 0x18);
    uVar4 = uVar2 * 2 & 0xfefefefe ^ (uVar2 & 0x80808080) - ((uVar2 & 0x80808080) >> 7) & 0x1b1b1b1b
    ;
    uVar5 = uVar1 * 2 & 0xfefefefe ^ (uVar1 & 0x80808080) - ((uVar1 & 0x80808080) >> 7) & 0x1b1b1b1b
    ;
    uVar6 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar3 = uVar2 ^ uVar4;
    uVar9 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar7 = uVar1 ^ uVar5;
    param_4 = (uVar3 << 0x18 | uVar3 >> 8) ^ uVar4 ^ uVar6 ^ (uVar6 >> 8 | (uVar2 >> 0x10) << 0x18);
    param_3 = (uVar7 << 0x18 | uVar7 >> 8) ^ uVar5 ^ uVar9 ^ (uVar9 >> 8 | (uVar1 >> 0x10) << 0x18);
  }
  return uVar7 ^ *unaff_R15;
}

