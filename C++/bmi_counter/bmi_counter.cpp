#include <iostream>

float feet_to_inches(float feet)
{
    return feet * 12;
}

float inches_to_meter(float inches)
{
    return inches * 0.0254f;
}

float pound_to_kg(float pound)
{
    return pound / 2.2f;
}

float get_Bmi(float kg, float meter)
{
    return kg / (meter * meter);
}
int main(void)
{
    float feet_height, inches_height, pound_weight;
    std::cout << "Введите рост в футах (feet): "; std::cin >> feet_height;
    std::cout << "Введите рост в дюймах (inches): "; std::cin >> inches_height;
    std::cout << "Введите вес в фунтах (pound): "; std::cin >> pound_weight;

    float inches_result = feet_to_inches(feet_height) + inches_height;
    float meter_result = inches_to_meter(inches_result);
    float kg_result = pound_to_kg(pound_weight);
    float bmi_result = get_Bmi(kg_result, meter_result);

    std::cout << "Расчитанные дюймы: "
              << inches_result << "\nРасчитанные метры: "
              << meter_result << "\nРасчитанные килограммы: "
              << kg_result << "\nИМТ равен "
              << bmi_result << std::endl;
    return 0;
}
