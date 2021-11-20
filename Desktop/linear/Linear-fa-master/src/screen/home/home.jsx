import React from 'react'
import { Link } from 'react-router-dom'
import './style.css'

// image
import people1 from '../../assets/img/pf1.jpg'
import people2 from '../../assets/img/pf2.jpg'
import BottomImg from '../../components/bottom-img/bottom-img'

const Home = () => {
    return (
        <>
        <div className="container bd-black-top">
            <h3 className="text-home">การวิเคราะห์ทิศทางการเติบโตของสินค้าทางการเกษตรในประเทศไทย</h3>
        </div>
        <br />
        <div className="container bd-black">
            <br />
            <div className="main">
                <center>
                    <div className="circle-image">
                        <div className="inner-text-img">
                            <p>63010870</p>
                            <p>วัชรพล โยธาดี</p>
                        </div>
                        <img src={people1} alt="" />
                    </div>
                    <div className="circle-image">
                        <img src={people2} alt="" />
                    </div>
                    <div className="circle-image">
                        <img src={people1} alt="" />
                    </div>
                    <div className="circle-image">
                        <img src={people2} alt="" />
                    </div>
                </center>
            </div>

                <br />
                <br />
            <div className="main">
                <center>
                    <Link to="/content">
                        <button class="button-24" role="button">View</button>
                    </Link>
                </center>
            </div>
            <br />
        </div>

        <br />
        <br />
        <BottomImg />
        </>
    )
}

export default Home
