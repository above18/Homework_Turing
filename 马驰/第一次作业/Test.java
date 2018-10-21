package ѧ������ϵͳ01;
import java.util.*;

public class Test{
	public static void main(String[]args) throws Exception{
		Scanner input = new Scanner(System.in);
		System.out.println("������ѧ������:");
		int n = input.nextInt();
		Student[]stu = new Student[n];
		for(int i = 0; i<n; i++){
			stu[i] = new Student();
		}
		System.out.println("----������ѧ����Ϣ----");
		for(int i = 0; i<n; i++){
			stu[i].setNumber(input.nextInt());
			stu[i].setName(input.next());
			stu[i].setDailyScore(input.nextFloat());
			stu[i].setFinalScore(input.nextFloat());
		}
		System.out.println("----�������----");
		System.out.println("----��ʼ�����ܳɼ�----");
		calcuScore(stu, n);
		System.out.println("----�ɼ��������----");
		System.out.println("----�ܳɼ�����Ϊ----");
		sortScore(stu, n);
		System.out.println("----�ܳɼ��������----");
		for(int i = 0; ;i++){
			System.out.println("----����Ҫ��ѯ��ѧ��:----");
			long a = input.nextInt();
			if(a == 0)
				break;
			else{
				seeScore(stu, a, n);
			}
		}
		System.out.println("----��ѯ���----");
		System.out.println("----�ɼ�����Ϊ----");
		analyzeScore(stu, n);
		System.out.println("----�������----");
	}
	public static void calcuScore(Student[]stu, int n){  //�����ܳɼ�
		for(int i = 0; i<n; i++){
			double score = 0.2*stu[i].getDailyScore() + 0.8*stu[i].getFinalScore();
			stu[i].setGeneralScore(score);
		}
	}
	public static void sortScore(Student[]stu, int n){  //�ܳɼ���������ӡ
		for(int i = 0; i<n-1; i++){
			for(int j = 0; j<n-i-1; j++){
				if(stu[j].getGeneralScore() > stu[j+1].getGeneralScore()){
					Student stu01 = new Student();
					stu01 = stu[j];
					stu[j] = stu[j+1];
					stu[j+1] = stu01;
				}
			}
		}
		for(int i = 0; i<n; i++){
			System.out.println("�ҵ����ֽ�" + stu[i].getName() + ",�ҵ�ѧ����:" + stu[i].getNumber() + ",�ҵ��ܳɼ���" + stu[i].getGeneralScore() + ",�ҵ�����Ϊ��" + (i+1) + "��");
		}
	}
	public static void seeScore(Student[]stu, long number, int n){  //����ѧ�Ų�ѯ�ɼ�
		for(int i = 0; i<n; i++){
			if(stu[i].getNumber() == number){
				System.out.println("�ҵ����ֽ�" + stu[i].getName() + ",�ҵ�ƽʱ�ɼ�:" + stu[i].getDailyScore() + ",�ҵ���ĩ�ɼ�:" + stu[i].getFinalScore() + "�ҵ��ܳɼ�:" + stu[i].getGeneralScore());
			}
		}
	}
	public static String analyzeScore(Student[]stu, int n){  //�ɼ�����
		double m = 0;  //�м�ֵ
		double s = 0;  //�м�ֵ
		double meanValue = 0;  //��ֵ
		double s2 = 0;  //����
		for(int i = 0; i<n; i++){
			m += stu[i].getGeneralScore();
		}
		meanValue = m/n;
		for(int i = 0; i<n; i++){
			s += (stu[i].getGeneralScore() - meanValue) * (stu[i].getGeneralScore() - meanValue);
		}
		s2 = s/n;
		System.out.println "�ÿγɼ���ƽ��ֵΪ:" + meanValue + ",����Ϊ" + s2;
	}

}

class Student{  //ѧ����Ķ���
	private long number;  //ѧ��
	private String name;  //����
	private double dailyScore;  //ƽʱ�ɼ�
	private double finalScore;  //��ĩ�ɼ�
	private double generalScore;  //�ܳɼ�
	public long getNumber(){
		return number;
	}
	public void setNumber(long number){
		this.number = number;
	}
	public String getName(){
		return name;
	}
	public void setName(String name){
		this.name = name;
	}
	public double getDailyScore(){
		return dailyScore;
	}
	public void setDailyScore(double dailyScore){
		this.dailyScore = dailyScore;
	}
	public double getFinalScore(){
		return finalScore;
	}
	public void setFinalScore(double finalScore){
		this.finalScore = finalScore;
	}
	public double getGeneralScore(){
		return generalScore;
	}
	public void setGeneralScore(double generalScore){
		this.generalScore = generalScore;
	}
}