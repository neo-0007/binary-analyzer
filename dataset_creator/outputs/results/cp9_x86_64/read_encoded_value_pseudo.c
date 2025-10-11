
/* WARNING: Type propagation algorithm not settling */

uint * read_encoded_value(long param_1,byte param_2,uint *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  byte bVar8;
  
  if (param_2 == 0xff) goto code_r0x004044ec;
  bVar8 = param_2 & 0x70;
  if (bVar8 == 0x30) {
    puVar7 = *(uint **)(param_1 + 0xb0);
  }
  else if (bVar8 < 0x31) {
    if (bVar8 == 0x20) {
      puVar7 = *(uint **)(param_1 + 0xa8);
    }
    else {
      if ((0x20 < bVar8) || ((param_2 & 0x60) != 0)) goto code_r0x004044ec;
LAB_006c1340:
      puVar7 = (uint *)0x0;
    }
  }
  else {
    if (bVar8 != 0x40) {
      if (bVar8 != 0x50) {
                    /* WARNING: Subroutine does not return */
        read_encoded_value_cold();
      }
      goto LAB_006c1340;
    }
    puVar7 = *(uint **)(param_1 + 0xb8);
  }
  if (param_2 == 0x50) {
    puVar1 = (undefined8 *)((ulong)((long)param_3 + 7U) & 0xfffffffffffffff8);
    pbVar6 = (byte *)*puVar1;
    puVar2 = (uint *)(puVar1 + 1);
    goto LAB_006c1322;
  }
  puVar2 = param_3;
  switch(param_2 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    pbVar6 = *(byte **)param_3;
    puVar2 = param_3 + 2;
    break;
  case 1:
    pbVar6 = (byte *)0x0;
    bVar4 = 0;
    do {
      uVar5 = *puVar2;
      puVar2 = (uint *)((long)puVar2 + 1);
      bVar3 = bVar4 & 0x3f;
      bVar4 = bVar4 + 7;
      pbVar6 = (byte *)((ulong)pbVar6 | (ulong)((byte)uVar5 & 0x7f) << bVar3);
    } while ((char)(byte)uVar5 < '\0');
    break;
  case 2:
    pbVar6 = (byte *)(ulong)(ushort)*param_3;
    puVar2 = (uint *)((long)param_3 + 2);
    break;
  case 3:
    pbVar6 = (byte *)(ulong)*param_3;
    puVar2 = param_3 + 1;
    break;
  default:
code_r0x004044ec:
                    /* WARNING: Subroutine does not return */
    abort();
  case 9:
    pbVar6 = (byte *)0x0;
    uVar5 = 0;
    do {
      bVar4 = (byte)*puVar2;
      puVar2 = (uint *)((long)puVar2 + 1);
      bVar3 = (byte)uVar5;
      uVar5 = uVar5 + 7;
      pbVar6 = (byte *)((ulong)pbVar6 | (ulong)(bVar4 & 0x7f) << (bVar3 & 0x3f));
    } while ((char)bVar4 < '\0');
    if ((0x3f < uVar5) || ((bVar4 & 0x40) == 0)) break;
    pbVar6 = (byte *)((ulong)pbVar6 | -1L << ((byte)uVar5 & 0x3f));
    goto LAB_006c136c;
  case 10:
    pbVar6 = (byte *)(long)(short)(ushort)*param_3;
    puVar2 = (uint *)((long)param_3 + 2);
    break;
  case 0xb:
    pbVar6 = (byte *)(long)(int)*param_3;
    puVar2 = param_3 + 1;
  }
  if (pbVar6 != (byte *)0x0) {
LAB_006c136c:
    if (bVar8 == 0x10) {
      puVar7 = param_3;
    }
    pbVar6 = pbVar6 + (long)puVar7;
    if ((char)param_2 < '\0') {
      *param_4 = *(undefined8 *)pbVar6;
      return puVar2;
    }
  }
LAB_006c1322:
  *param_4 = pbVar6;
  return puVar2;
}

