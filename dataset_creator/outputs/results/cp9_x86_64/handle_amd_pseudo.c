
/* WARNING: Removing unreachable block (ram,0x006c6386) */

undefined1  [16] handle_amd(int param_1)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  puVar1 = (uint *)cpuid(0x80000000);
  uVar4 = (0xbe < param_1) + 0x80000005;
  uVar5 = (ulong)uVar4;
  uVar7 = 0;
  if (*puVar1 < uVar4) goto switchD_006c646a_caseD_0;
  if (uVar4 == 0) {
    lVar2 = cpuid_basic_info(0);
  }
  else if (uVar4 == 1) {
    lVar2 = cpuid_Version_info(1);
  }
  else if (uVar4 == 2) {
    lVar2 = cpuid_cache_tlb_info(2);
  }
  else if (uVar4 == 3) {
    lVar2 = cpuid_serial_info(3);
  }
  else if (uVar4 == 4) {
    lVar2 = cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (uVar4 == 5) {
    lVar2 = cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (uVar4 == 6) {
    lVar2 = cpuid_Thermal_Power_Management_info(6);
  }
  else if (uVar4 == 7) {
    lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (uVar4 == 9) {
    lVar2 = cpuid_Direct_Cache_Access_info(9);
  }
  else if (uVar4 == 10) {
    lVar2 = cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (uVar4 == 0xb) {
    lVar2 = cpuid_Extended_Topology_info(0xb);
  }
  else if (uVar4 == 0xd) {
    lVar2 = cpuid_Processor_Extended_States_info(0xd);
  }
  else if (uVar4 == 0xf) {
    lVar2 = cpuid_Quality_of_Service_info(0xf);
  }
  else if (uVar4 == 0x80000002) {
    lVar2 = cpuid_brand_part1_info(0x80000002);
  }
  else if (uVar4 == 0x80000003) {
    lVar2 = cpuid_brand_part2_info(0x80000003);
  }
  else if (uVar4 == 0x80000004) {
    lVar2 = cpuid_brand_part3_info(0x80000004);
  }
  else {
    lVar2 = cpuid(uVar4);
  }
  uVar4 = *(uint *)(lVar2 + 8);
  uVar5 = (ulong)uVar4;
  uVar6 = *(uint *)(lVar2 + 0xc);
  if (param_1 < 0xbc) {
    param_1 = param_1 + 3;
    uVar6 = uVar4;
  }
  switch(param_1) {
  case 0xbd:
    uVar4 = uVar6 >> 0x10 & 0xff;
    uVar7 = (ulong)uVar4;
    if (uVar4 == 0xff) {
      uVar7 = (ulong)((uVar6 >> 0x10) * 4 & 0x3fc00);
    }
    break;
  case 0xbf:
    uVar7 = 0;
    if ((uVar6 & 0xf000) != 0) {
      uVar7 = (ulong)(uVar6 >> 6 & 0x3fffc00);
    }
    break;
  case 0xc0:
    uVar4 = uVar6 >> 0xc & 0xf;
    uVar5 = (ulong)uVar4;
    switch(uVar4) {
    default:
      uVar7 = uVar5;
      break;
    case 3:
    case 5:
    case 7:
    case 9:
switchD_006c646a_caseD_3:
      uVar7 = 0;
      break;
    case 6:
switchD_006c646a_caseD_6:
      uVar7 = 8;
      break;
    case 8:
switchD_006c646a_caseD_8:
      uVar7 = 0x10;
      break;
    case 10:
switchD_006c646a_caseD_a:
      uVar7 = 0x20;
      break;
    case 0xb:
switchD_006c646a_caseD_b:
      uVar7 = 0x30;
      break;
    case 0xc:
switchD_006c646a_caseD_c:
      uVar7 = 0x40;
      break;
    case 0xd:
switchD_006c646a_caseD_d:
      uVar7 = 0x60;
      break;
    case 0xe:
switchD_006c646a_caseD_e:
      uVar7 = 0x80;
      break;
    case 0xf:
      uVar7 = (ulong)(uVar6 >> 6 & 0x3fffc00);
      uVar5 = uVar7 % (ulong)(uVar6 & 0xff);
      uVar7 = uVar7 / (uVar6 & 0xff);
    }
    break;
  case 0xc1:
    uVar7 = 0;
    if ((uVar6 & 0xf000) == 0) break;
  case 0xbe:
    uVar7 = (ulong)(uVar6 & 0xff);
    break;
  case 0xc2:
    uVar7 = 0;
    if ((uVar4 & 0xf000) != 0) {
      uVar7 = (ulong)(uVar4 * 2 & 0x7ff80000);
    }
    break;
  case 0xc3:
    uVar6 = uVar4 >> 0xc & 0xf;
    uVar7 = (ulong)uVar6;
    switch(uVar6) {
    case 3:
    case 5:
    case 7:
    case 9:
      goto switchD_006c646a_caseD_3;
    case 6:
      goto switchD_006c646a_caseD_6;
    case 8:
      goto switchD_006c646a_caseD_8;
    case 10:
      goto switchD_006c646a_caseD_a;
    case 0xb:
      goto switchD_006c646a_caseD_b;
    case 0xc:
      goto switchD_006c646a_caseD_c;
    case 0xd:
      goto switchD_006c646a_caseD_d;
    case 0xe:
      goto switchD_006c646a_caseD_e;
    case 0xf:
      uVar3 = uVar5 & 0xff;
      uVar7 = (ulong)(uVar4 * 2 & 0x7ff80000);
      uVar5 = uVar7 % uVar3;
      uVar7 = uVar7 / uVar3;
    }
    break;
  case 0xc4:
    uVar7 = 0;
    if ((uVar4 & 0xf000) != 0) {
      uVar7 = uVar5 & 0xff;
    }
    break;
  default:
    uVar7 = (ulong)(uVar6 >> 0xe & 0x3fc00);
  }
switchD_006c646a_caseD_0:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar7;
  return auVar8;
}

