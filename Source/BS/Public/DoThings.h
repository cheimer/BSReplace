#pragma once

/*
Enemy
Goblin 체력이 낮아지면 분노 추가 -> 체력관련 이후 설정
Lich 공격 모션 2 추가 땅에서 지점 공격

몹 잡아서 강화 (6속성, 3타입 재료)
재료-> AttackMaterial 강화 하나 몰빵, 랜덤, 보스 크게나옴, 남는 속성재료-> 1:2비율로 랜덤 교환
랜덤 교환은 한번에 전부 다바뀜 -> 100개 교환하면 랜덤으로 한 속성 50개 (10개쯤 선택권 주는것도)
돈-> AttackType 강화 3개 골고루가 효율 가장 높게. 

아우라 주변 공격 -> 잡몹 특화
샷 일직선 공격, 근처 적 타겟 -> 만능형 (유도형으로 관통, 강화오르면 관통 오름)
폭발 원형 공격, 근처 적 타겟 -> 보스 특화

Material 별 속성



*/

//월                                화               수                            금 마무리
//ㅇㅇㅇㅇㅇㅇ
//아이템 드랍 -> 강화 -> Data Table -> UI -> 승/패 설정 -> 메뉴 추가 -> 레벨 추가(게임모드)

/* ERROR

Anim - 연결이 부드럽지 않음. 이동 -> 공격 간의 끊김.
		사망 모션 어색함. 수정 방법 생각해보기

LifeTime - BSWeapon_에 나눠져있음, 중복코드 -> 하나로 합칠방법
*/