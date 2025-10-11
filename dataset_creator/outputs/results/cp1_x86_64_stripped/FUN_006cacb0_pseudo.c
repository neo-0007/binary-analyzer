
/* WARNING: Type propagation algorithm not settling */

uint * FUN_006cacb0(long param_1,byte param_2,uint *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  
  if (param_2 == 0xff) goto code_r0x00404674;
  bVar8 = param_2 & 0x70;
  if (bVar8 == 0x30) {
    puVar2 = *(uint **)(param_1 + 0xb0);
  }
  else if (bVar8 < 0x31) {
    if (bVar8 == 0x20) {
      puVar2 = *(uint **)(param_1 + 0xa8);
    }
    else {
      if ((0x20 < bVar8) || ((param_2 & 0x60) != 0)) goto code_r0x00404674;
LAB_006cad50:
      puVar2 = (uint *)0x0;
    }
  }
  else {
    if (bVar8 != 0x40) {
      if (bVar8 != 0x50) {
        puVar2 = (uint *)switchD_006cad05::caseD_5();
        return puVar2;
      }
      goto LAB_006cad50;
    }
    puVar2 = *(uint **)(param_1 + 0xb8);
  }
  if (param_2 == 0x50) {
    puVar1 = (undefined8 *)((ulong)((long)param_3 + 7U) & 0xfffffffffffffff8);
    pbVar7 = (byte *)*puVar1;
    puVar3 = (uint *)(puVar1 + 1);
    goto LAB_006cad32;
  }
  puVar3 = param_3;
  switch(param_2 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    pbVar7 = *(byte **)param_3;
    puVar3 = param_3 + 2;
    break;
  case 1:
    pbVar7 = (byte *)0x0;
    bVar5 = 0;
    do {
      uVar6 = *puVar3;
      puVar3 = (uint *)((long)puVar3 + 1);
      bVar4 = bVar5 & 0x3f;
      bVar5 = bVar5 + 7;
      pbVar7 = (byte *)((ulong)pbVar7 | (ulong)((byte)uVar6 & 0x7f) << bVar4);
    } while ((char)(byte)uVar6 < '\0');
    break;
  case 2:
    pbVar7 = (byte *)(ulong)(ushort)*param_3;
    puVar3 = (uint *)((long)param_3 + 2);
    break;
  case 3:
    pbVar7 = (byte *)(ulong)*param_3;
    puVar3 = param_3 + 1;
    break;
  default:
code_r0x00404674:
                    /* WARNING: Subroutine does not return */
    FUN_00404713();
  case 9:
    pbVar7 = (byte *)0x0;
    uVar6 = 0;
    do {
      bVar5 = (byte)*puVar3;
      puVar3 = (uint *)((long)puVar3 + 1);
      bVar4 = (byte)uVar6;
      uVar6 = uVar6 + 7;
      pbVar7 = (byte *)((ulong)pbVar7 | (ulong)(bVar5 & 0x7f) << (bVar4 & 0x3f));
    } while ((char)bVar5 < '\0');
    if ((0x3f < uVar6) || ((bVar5 & 0x40) == 0)) break;
    pbVar7 = (byte *)((ulong)pbVar7 | -1L << ((byte)uVar6 & 0x3f));
    goto LAB_006cad7c;
  case 10:
    pbVar7 = (byte *)(long)(short)(ushort)*param_3;
    puVar3 = (uint *)((long)param_3 + 2);
    break;
  case 0xb:
    pbVar7 = (byte *)(long)(int)*param_3;
    puVar3 = param_3 + 1;
  }
  if (pbVar7 != (byte *)0x0) {
LAB_006cad7c:
    if (bVar8 == 0x10) {
      puVar2 = param_3;
    }
    pbVar7 = pbVar7 + (long)puVar2;
    if ((char)param_2 < '\0') {
      *param_4 = *(undefined8 *)pbVar7;
      return puVar3;
    }
  }
LAB_006cad32:
  *param_4 = pbVar7;
  return puVar3;
}

